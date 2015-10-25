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

const int maxn = 1000;

int sx[maxn], sy[maxn];
int ex[maxn], ey[maxn];
int n,k;

void rotx( int px, int pomak ){
    for( int x = 0; x < k; x++ )
        if( ex[x] == px )
            ey[x] = ( ey[x] + pomak )%n;
}
void roty( int py, int pomak ){
    for( int x = 0; x < k; x++ )
        if( ey[x] == py )
            ex[x] = ( ex[x] + pomak )%n;
}
int main(){
    int a;
    int pomakx, pomaky;
    scanf("%d %d", &n, &k);
    for( int x = 0; x < k; x++ ){
        scanf("%d %d %d", &a, sx +x, sy +x );
        a--, sx[x]--, sy[x]--;
        ex[x] = a/n;
        ey[x] = a%n;
    }
    for( int x = 0; x < k; x++ ){
        pomakx = sx[x] - ex[x];
        pomaky = sy[x] - ey[x];
        if( pomakx < 0)
            pomakx += n;
        if( pomaky < 0)
            pomaky += n;
        rotx(ex[x], pomaky );
        roty(ey[x], pomakx );
        printf("%d\n", pomakx + pomaky );
    }
}
