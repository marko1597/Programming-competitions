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

const int maxn = 100001;

int fw[maxn+1];

inline void ins( int a, int b ){
    for( int x = a; x < maxn; x += x& -x )
        fw[x] += b;
}
inline int query( int a ){
    int ret = 0;
    for( int x = a; x > 0; x -= x& -x )
        ret += fw[x];
    return ret;
}
inline int cvjet( int l, int r ){
    int a,b;
    a = query( l );
    b = query( r );
    ins( l, -a ), ins( l+1, a );
    ins( r, -b ), ins( r+1, b );
    ins( l+1, 1 ), ins( r, -1 );
    return a+b;
}
int main(){
    int n,l,r;
    scanf("%d", &n);
    for( int x = 0; x < n; x++ ){
        scanf("%d %d", &l, &r);
        printf("%d\n", cvjet(l, r));
    }
}
