#include <cstdio>
#include <cstring>
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <time.h>
#include <string.h>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
using namespace std;

const int maxn = 550;

int id = 0;
struct point{
    int x, y, ind;
    point(){
        x = y = ind = -1;
    }
    point( int a, int b ){
        x = a, y = b;
    }
    void ucitaj(){
        scanf("%d %d", &x, &y);
        ind = id++;
    }
};
bool inds( point a, point b ){
    return a.ind < b.ind;
}
point niz[maxn];
int ans = 0, tx[maxn], ty[maxn];
int abss( int n ){
    if( n < 0 )
        return -n;
    return n;
}
int main(){
    int n, dd, pp;
    scanf("%d", &n);
    for( int x = 0; x < n; x++ )
        niz[x].ucitaj();
    for( int x = 0; x < n; x++ ){
        dd = 1 << 30;
        pp = 0;
        for( int i = x; i < n; i++ ){
            if( dd > abss( x +1 - niz[i].x ) ){
                dd = abss( x +1 - niz[i].x );
                pp = i;
            }
        }
        swap( niz[x], niz[pp] );
    }
    for( int x = 0; x < n; x++ )
        tx[ niz[x].ind ] = x +1;
    for( int x = 0; x < n; x++ ){
        dd = 1 << 30;
        pp = 0;
        for( int i = x; i < n; i++ ){
            if( dd > abss( x +1 - niz[i].y ) ){
                dd = abss( x +1 - niz[i].y );
                pp = i;
            }
        }
        swap( niz[x], niz[pp] );
    }
    for( int x = 0; x < n; x++ )
        ty[ niz[x].ind ] = x +1;
    sort( niz, niz + n, inds );
    for( int x = 0; x < n; x++ )
        ans += abss( niz[x].x - tx[x] ) + abss( niz[x].y - ty[x] );
    printf("%d\n", ans);
    for( int x = 0; x < n; x++ ){
        if( niz[x].x - tx[x] >= 0 )
            for( int i = 0; i < niz[x].x - tx[x]; i++ )
                printf("%d L\n", x +1 );
        else
            for( int i = 0; i < -niz[x].x + tx[x]; i++ )
                printf("%d R\n", x +1 );
        if( niz[x].y - ty[x] >= 0 )
            for( int i = 0; i < niz[x].y - ty[x]; i++ )
                printf("%d U\n", x +1 );
        else
            for( int i = 0; i < -niz[x].y + ty[x]; i++ )
                printf("%d D\n", x +1 );
    }
}
