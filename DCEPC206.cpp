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

const int maxn = 1000006;

unsigned long long fw[maxn];

void ins( int a, int b ){
    for( int x = a; x < maxn; x += x& -x )
        fw[ x ] += b;
}
unsigned long long ge( int a ){
    unsigned long long ret = 0;
    for( int x = a; x > 0; x -= x& -x )
        ret += fw[ x ];
    return ret;
}
int main(){
    int t, n, br;
    unsigned long long ans;
    scanf("%d", &t);
    while( t-- ){
        memset( fw, 0, sizeof fw );
        scanf("%d", &n);
        ans = 0;
        for( int x = 0; x < n; x++ ){
            scanf("%d", &br);
            ins( br + 2, br );
            ans += ge( br + 1 );
        }
        printf("%llu\n",ans);
    }
}
