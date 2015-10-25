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

const int maxn = 160;

int niz[ maxn ];
int pom( int n ){
    int tmp[ maxn ], p = 0;
    for( int x = 0; x < maxn; x++ )
        tmp[ x ] = 0;
    while( n >= 1 ){
        for( int x = 0; x < maxn; x++ )
            tmp[ x + p] += ( n % 10 ) * niz[ x ];
        p++;
        n /= 10;
    }
    for( int x = 0; x < maxn; x++ )
        tmp[ x +1 ] += tmp[ x ]/10, tmp[ x ] %= 10;
    for( int x = 0; x < maxn; x++ )
        niz[ x ] = tmp[ x ];
    for( int x = maxn -1; x >= 0; x-- )
        if( niz[ x ] != 0 )
            return x;
}
int main(){
    int n, t, ex, p;
	scanf("%d", &t);
    while( t-- ){
        for( int x = 0; x < maxn; x++ )
            niz[ x ] = 0;
        niz[ 0 ] = 1;
        scanf("%d", &n);
        for( int x = 0; x < n; x++ )
            p = pom( x +1 );
        for( int x = p; x >= 0; x-- )
            putchar( '0' + niz[x] );
        putchar('\n');
    }
}
