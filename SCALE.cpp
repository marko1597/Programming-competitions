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

const int maxn = 20;

int pw[maxn];
int su[maxn];
vector< int > l, r;
int ab( int a ){
    if( a < 0 )
        return -a;
    return a;
}
int main(){
    int n, m, p = 18;
    pw[0] = su[0] = 1;
    for( int x = 0; x < maxn-1; x++ ){
        pw[ x+1 ] = pw[ x ]*3;
        su[ x+1 ] = su[ x ] + pw[ x +1 ];
    }
    scanf("%d %d", &n, &m);
    p = n- 2;
    if( su[ p +1 ] < m )
        printf("\n-1\n");
    else{
        do{
            if( p < 0 ){
                p = 0;
                break;
            }
            while( su[p] >= ab( m ) )
                p--;
            if( m > 0 ){
                m -= pw[ p +1 ];
                r.push_back( p +1 );
            }else if( m < 0 ){
                m += pw[ p +1 ];
                l.push_back( p +1 );
            }
        }while( m && p != 0);
        if( m > 0 ){
            m -= pw[ p ];
            r.push_back( p );
        }else if( m < 0 ){
            m += pw[ p ];
            l.push_back( p );
        }
        for( int x = l.size() -1; x >= 0; x-- )
            printf("%d ", l[x] +1);
        putchar('\n');
        for( int x = r.size() -1; x >=0 ; x-- )
            printf("%d ", r[x] +1);
        putchar('\n');
    }
}
