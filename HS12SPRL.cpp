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

const int maxn = 201;
int ans[maxn][maxn];

void draw( int b, int a = 0,int t = 1 ){
    for( int x = a; x <= b; x++ )
        ans[x][a] = t++;
    for( int x = a +1; x <= b; x++ )
        ans[b][x] = t++;
    for( int x = b -1; x >= a; x-- )
        ans[x][b] = t++;
    for( int x = b -1; x >= a+1; x-- )
        ans[a][x] = t++;
    if( b - a >= 2 )
        draw( b - 1, a + 1, t );
}
void print( int n ){
    for( int x = 0; x < n; x++ ){
        for( int y = 0; y < n; y++ )
            printf("%6d", ans[y][x]);
        putchar('\n');
    }
    putchar('\n');
}
int main(){
    int t, n;
    scanf("%d", &t);
    while( t-- ){
        scanf("%d", &n);
        draw( n-1 );
        print( n );
    }
}
