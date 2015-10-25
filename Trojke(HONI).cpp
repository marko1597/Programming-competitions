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

const int maxn = 150;

char in[maxn][maxn];
int px[26], py[26], psize = 0, ans = 0;

int main(){
    memset( px, -1, sizeof px );
    memset( py, -1, sizeof py );
    int n;
    scanf("%d", &n);
    for( int x = 0; x < n; x++ ){
        scanf("%s", in[x]);
        for( int y = 0; y < n; y++ )
            if( in[x][y] == '.' )
                continue;
            else
                px[psize] = x, py[psize++] = y;
    }
    for( int i = 0; i < psize; i++ )
        for( int j = i+1; j < psize; j++ )
            for( int k = j+1; k < psize; k++ )
                if( px[i]*( py[j] - py[k] ) + px[j]*( py[k] - py[i] ) + px[k]*( py[i] - py[j] ) == 0 )
                    ans++;
    printf("%d\n", ans);
}
