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

const int maxn = 1005;

struct prtr{
    vector< pair< char, int > > niz;
    bool ima[2];
    prtr(){
        ima[0] = ima[1] = 0;
    }
    int upit( char c ){
        int l = niz.size();
        for( int x = 0; x < l; x++ )
            if( niz[x].first == c )
                return niz[x].second;
        return 0;
    }
};
prtr tree[maxn*maxn];

int pr = 2, l;
char in[maxn];
int root[2];
int val( char* rjec, int i, int x ){
    if( !i )
        return rjec[x]-'a';
    return rjec[ l -x -1 ]-'a';
}
void ubaci( char* rjec ){
    l = strlen( rjec );
    root[0] = root[1] = 1;
    for( int i = 0; i < 2; i++ )
        for( int x = 0; x < l; x++ ){
            if( tree[ root[i] -1 ].upit( val( rjec, i, x ) )  == 0 ){
                tree[ root[i] -1 ].niz.push_back( make_pair( val( rjec, i, x ), pr++ ) );
            }
            root[i] = tree[ root[i] -1 ].upit( val( rjec, i, x ) );
        }
    for( int i = 0; i < 2; i++ )
        tree[ root[i] -1 ].ima[i] = 1;
}
int p[2];
bool ppp[2];
void upit( char* rjec ){
    ppp[0] = ppp[1] = 0;
    root[0] = root[1] = 1;
    p[0] = p[1] = -1;
    l = strlen( rjec );
    for( int i = 0; i < 2; i++ )
        for( int x = 0; x < l -1; x++ ){
            if( root[i] != 0 )
                if( tree[ root[i] -1 ].upit( val( rjec, i, x ) ) == 0 ){
                    root[i] = 0;
                    break;
                }
                root[i] = tree[ root[i] -1 ].upit( val( rjec, i, x ) );
            if( root[i] != 0 && tree[ root[i] -1 ].ima[i] )
                p[i] = x, ppp[i] = 1;
        }
    for( int i = 0; i < 2; i++ ){
        if( ppp[i] )
            for( int x = (l-p[i]-1)*i; x <= p[i]*(1-i) +i*(l-1); x++ )
                putchar( in[x] );
        else
            printf( "ne postoji" );
        putchar(' ');
    }
    putchar( '\n' );
}
int main(){
    int n;
    scanf("%d", &n);
    for( int x = 0; x < n; x++ ){
        scanf("%s", in);
        ubaci( in );
    }
    scanf("%d", &n);
    for( int x = 0; x < n; x++ ){
        scanf("%s", in);
        upit( in );
    }
}
