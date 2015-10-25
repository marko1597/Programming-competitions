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

const int maxn = 200;

int dp[maxn][maxn];
int niz1[maxn],niz2[maxn];
int main(){
    int l1,l2;
    scanf("%d %d", &l1, &l2 );
    for( int x = 0; x < l1; x++ )
        scanf("%d", niz1 + x);
    for( int x = 0; x < l2; x++ )
        scanf("%d", niz2 + x);
    for( int i = 1; i <= l1; i++ )
        for( int j = 1; j <= l2; j++ )
            if( niz1[ i-1 ] == niz2[ j-1 ] )
                dp[i][j]=dp[ i-1 ][ j-1 ] + 1;
            else
                dp[i][j]=max(dp[ i -1 ][ j ],dp[ i ][ j -1 ]);
    printf("%d\n",dp[l1][l2]);
}
