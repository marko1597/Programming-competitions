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

int nizx[1005], nizy[1005];
int main(){
    int n,ans = 20000000;
    scanf("%d", &n);
    for( int x = 0; x < n; x++ )
        scanf("%d %d", nizx + x, nizy + x );
    for( int x = 0; x < n; x++ )
        for( int j = x + 1; j < n; j++ )
            ans = min( ans, abs( nizx[x] - nizx[j] ) + abs( nizy[x] - nizy[j] ) );
    printf("%d\n", ans);
}
