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

const int maxn = 100020;
int niz[ maxn ];
vector< int > node[ maxn ];

int main(){
    int t, n, a, b;
    scanf("%d", &t);
    while( t-- ){
        memset( niz, 0, sizeof niz );
        scanf("%d", &n);
        for( int x = 0; x < n; x++ ){
            scanf("%d %d", &a, &b);
            niz[ a -1 ]++, niz[ b -1 ]++;
            node[ a -1 ].push_back( b -1 );
            node[ b -1 ].push_back( a -1 );
        }
    }
}
