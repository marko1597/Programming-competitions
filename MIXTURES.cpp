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

const int maxn = 100;
int niz[ maxn ];

int main(){
    int n, b, ans = 0;
    memset( niz, 0, sizeof niz );
    while( scanf( "%d", &n ) == 1 ){
        for( int x = 0; x < n; x++ )
            scanf("%d", &b );
        niz[ b ]++;
    }
    for( int x = 0; x < maxn; x++ )
        while( niz[ x ] > 0 && niz[ 99 -x ] > 0 )
            niz[ x ]--, niz[ 99 -x ]--, ans += niz[ x ] * niz[ 99 -x ];

}
