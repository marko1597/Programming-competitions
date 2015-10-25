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

int main(){
    char tup[200][20], str[200];
    int n, t, a, b;
    scanf("%d", &t);
    while( t-- ){
        scanf("%d", &n);
        for( int x = 0; x < n; x++ )
            scanf("%s", tup[x]);
        scanf("%s", str);
        for( int x = 0; x < n; x++ ){
            a = b = 0;
            for( int y = 0; y < 6; y++ ){
                a += tup[x][y] & ( 1 << y );
                if( tup[x][y] & ( 1 << ( y + 3 ) % 6 ) )
					b += 1 << y;
            }
            putchar(str[a]);
            putchar(str[b]);
        }
        putchar('\n');
    }
}
