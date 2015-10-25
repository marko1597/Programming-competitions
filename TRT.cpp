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

const int maxn = 2001;

int n, niz[ maxn ], rez[ maxn ][ maxn ];
int rek( int a, int b ){
    if( rez[a][b] != -1 )
        return rez[a][b];
    int age = a + n -b;
    if( a == b )
        return rez[a][b] = niz[a]*age;
    return rez[a][b] = max( age*niz[a] + rek( a + 1, b ), age*niz[b] + rek( a, b -1 ));
}
int main(){
    memset( rez, -1, sizeof rez );
    scanf("%d", &n );
    for( int x = 0; x < n; x++ )
        scanf("%d", niz + x);
    printf("%d\n", rek(0, n -1));
}
