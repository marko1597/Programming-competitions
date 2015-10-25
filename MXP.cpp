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

const int maxn = 10005;

double niza[ maxn ], nizb[ maxn ];
double tmp, b;

int main(){
    int ans = 0, n;
    scanf("%d", &n );
    for( int x = 0; x < n; x++ )
        scanf("%lf", niza + x);
    for( int x = 0; x < n; x++ )
        scanf("%lf", nizb + x);
    for( int x = 0; x < n; x++ ){
        if( niza[ x ] == 0 )
            continue;
        tmp = log10( niza[ x ] )* nizb[ x ];
        if( tmp > b ){
            b = tmp;
            ans = x +1;
        }
    }
    printf("%d\n", ans );
}
