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

const int maxn = 6, str = 3;

int kocka[ maxn ][ str * str ];
int tmp[ str ][ str ];

inline void sw( int &a, int &b ){
    a += b;
    b = a - b;
    a -= b;
}
inline void rot1( int *a, int ro = 0 ){
    ro = -ro;
    ro += 4;
    ro %= 4;
    if( ro == 1 )
        for( int x = 0; x < str; x++ )
            for( int y = 0; y < str; y++ )
                tmp[ x ][ y ] = a[ y * str + str -1 -x ];
    else if( ro == 2 )
        for( int x = 0; x < str; x++ )
            for( int y = 0; y < str; y++ )
                tmp[ x ][ y ] = a[ ( str -1 -x ) * str + str -1 -y ];
    else if( ro == 3 )
        for( int x = 0; x < str; x++ )
            for( int y = 0; y < str; y++ )
                tmp[ x ][ y ] = a[ ( str -1 -y ) * str + x ];
    else
        return;
    for( int x = 0; x < str; x++ )
        for( int y = 0; y < str; y++ )
            a[ x * str + y ] = tmp[ x ][ y ];
}
inline void rot( int a, int b = 0 ){
    rot1( kocka[ a -1 ], b );
    if( a == 1 ){
        for( int y = 0; y < b; y++ ){
            for( int x = 0; x < str; x++ )
                sw( kocka[ 4 ][ str * x ], kocka[ 1 ][ str * x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 4 ][ str * x ], kocka[ 5 ][ str * x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 4 ][ str * x ], kocka[ 3 ][ str * ( 3 - x ) -1 ] );
        }
        for( int y = 0; y > b; y-- ){
            for( int x = 0; x < str; x++ )
                sw( kocka[ 4 ][ str * x ], kocka[ 3 ][ str * ( 3 - x ) -1 ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 4 ][ str * x ], kocka[ 5 ][ str * x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 4 ][ str * x ], kocka[ 1 ][ str * x ] );
        }
    }else if( a == 2 ){
        for( int y = 0; y < b; y++ ){
            for( int x = 0; x < str; x++ )
                sw( kocka[ 0 ][ str * ( 3 - x ) -1 ], kocka[ 4 ][ ( str - 1 ) * str + x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 0 ][ str * ( 3 - x ) -1 ], kocka[ 2 ][ str * x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 0 ][ str * ( 3 - x ) -1 ], kocka[ 5 ][ str - 1 - x ] );
        }
        for( int y = 0; y > b; y-- ){
            for( int x = 0; x < str; x++ )
                sw( kocka[ 0 ][ str * ( 3 - x ) -1 ], kocka[ 5 ][ str - 1 - x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 0 ][ str * ( 3 - x ) -1 ], kocka[ 2 ][ str * x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 0 ][ str * ( 3 - x ) -1 ], kocka[ 4 ][ ( str - 1 ) * str + x ] );
        }
    }else if( a == 3 ){
        for( int y = 0; y < b; y++ ){
            for( int x = 0; x < str; x++ )
                sw( kocka[ 1 ][ str * ( 3 - x ) -1 ], kocka[ 4 ][ str * ( 3 - x ) -1 ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 1 ][ str * ( 3 - x ) -1 ], kocka[ 3 ][ str * x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 1 ][ str * ( 3 - x ) -1 ], kocka[ 5 ][ str * ( 3 - x ) -1 ] );
        }
        for( int y = 0; y > b; y-- ){
            for( int x = 0; x < str; x++ )
                sw( kocka[ 1 ][ str * ( 3 - x ) -1 ], kocka[ 5 ][ str * ( 3 - x ) -1 ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 1 ][ str * ( 3 - x ) -1 ], kocka[ 3 ][ str * x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 1 ][ str * ( 3 - x ) -1 ], kocka[ 4 ][ str * ( 3 - x ) -1 ] );
        }
    }else if( a == 4 ){
        for( int y = 0; y < b; y++ ){
            for( int x = 0; x < str; x++ )
                sw( kocka[ 2 ][ str * ( 3 - x ) -1 ], kocka[ 4 ][ str - 1 - x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 2 ][ str * ( 3 - x ) -1 ], kocka[ 0 ][ str * x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 2 ][ str * ( 3 - x ) -1 ], kocka[ 5 ][ ( str  -1 ) * str + x ] );
        }
        for( int y = 0; y > b; y-- ){
            for( int x = 0; x < str; x++ )
                sw( kocka[ 2 ][ str * ( 3 - x ) -1 ], kocka[ 5 ][ ( str  -1 ) * str + x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 2 ][ str * ( 3 - x ) -1 ], kocka[ 0 ][ str * x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 2 ][ str * ( 3 - x ) -1 ], kocka[ 4 ][ str - 1 - x ] );
        }
    }else if( a == 5 ){
        for( int y = 0; y < b; y++ ){
            for( int x = 0; x < str; x++ )
                sw( kocka[ 3 ][ str - 1 - x ], kocka[ 2 ][ str - 1 - x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 3 ][ str - 1 - x ], kocka[ 1 ][ str - 1 - x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 3 ][ str - 1 - x ], kocka[ 0 ][ str - 1 - x ] );
        }
        for( int y = 0; y > b; y-- ){
            for( int x = 0; x < str; x++ )
                sw( kocka[ 3 ][ str - 1 - x ], kocka[ 0 ][ str - 1 - x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 3 ][ str - 1 - x ], kocka[ 1 ][ str - 1 - x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 3 ][ str - 1 - x ], kocka[ 2 ][ str - 1 - x ] );
        }
    }else if( a == 6 ){
        for( int y = 0; y < b; y++ ){
            for( int x = 0; x < str; x++ )
                sw( kocka[ 0 ][ ( str  -1 ) * str + x ], kocka[ 1 ][ ( str  -1 ) * str + x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 0 ][ ( str  -1 ) * str + x ], kocka[ 2 ][ ( str  -1 ) * str + x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 0 ][ ( str  -1 ) * str + x ], kocka[ 3 ][ ( str  -1 ) * str + x ] );
        }
        for( int y = 0; y > b; y-- ){
            for( int x = 0; x < str; x++ )
                sw( kocka[ 0 ][ ( str  -1 ) * str + x ], kocka[ 3 ][ ( str  -1 ) * str + x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 0 ][ ( str  -1 ) * str + x ], kocka[ 2 ][ ( str  -1 ) * str + x ] );
            for( int x = 0; x < str; x++ )
                sw( kocka[ 0 ][ ( str  -1 ) * str + x ], kocka[ 1 ][ ( str  -1 ) * str + x ] );
        }
    }
}
inline int raz( int id ){
    int niz[ 6 ], ret = 0;
    memset( niz, 0, sizeof niz );
    for( int x = 0; x < str * str; x++ )
        niz[ kocka[ id ][ x ] - 1 ] = 1;
    for( int x = 0; x < maxn; x++ )
        ret += niz[ x ];
    return ret;
}
int main(){
    int t, l, mu = 1, id;
    char in[ 5000 ];
    int niz[265];
    niz['F'] = 0;
    niz['R'] = 1;
    niz['B'] = 2;
    niz['L'] = 3;
    niz['U'] = 4;
    niz['D'] = 5;
    scanf("%d", &t);
    while( t-- ){
        memset( in, 0, sizeof in );
        scanf("%s", in);
        for( int x = 0; x < maxn; x++ )
            for( int y = 0; y < str * str; y++ )
                kocka[ x ][ y ] = x +1;
        l = strlen( in );
        for( int x = 0; x < l; x++ ){
            mu = 1, id = niz[ in[ x ] ];
            if( in[ x + 1 ] == '2' )
                mu = 2, x++;
            if( in[ x + 1] == '\'' )
                mu *= -1, x++;
            rot( id + 1, mu );
        }
        for( int x = 0; x < maxn; x++ )
            printf("%d ", raz( x ) );
        putchar('\n');
    }
}
