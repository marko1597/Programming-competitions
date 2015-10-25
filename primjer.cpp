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
char matrx[ maxn ][ maxn ];
int boja[ maxn ][ maxn ];

int n, brojs = 0;

int dfs( int x, int y ){
    if( x < 0 || y < 0 || x > n || y > n )
        return 0;
    if( matrx[x][y] == '#' && boja[x][y] != 0 )
        return 0;

    boja[x][y] = brojs;

    dfs( x -1, y );
    dfs( x +1, y );
    dfs( x, y +1 );
    dfs( x, y -1 );
}

int main(){
    memset( boja, 0, sizeof boja);
    scanf("%d", &n);
    for( int x = 0; x < n; x++ )
        scanf("%s", matrx[ x ]);
    //pronalazenje prvog mijesta za koje mozemo reci da je soba.
    for( int x = 0; x < n; x++ )
        for( int y = 0; y < n; y++ )
            if( matrx[x][y] == '.' && boja[x][y] == 0 )
                ++brojs, dfs( x, y );
}
