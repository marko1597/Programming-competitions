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

typedef long long llint;

int fun5( int n ){
    if( !n )
        return 0;
    return fun5( n / 5 ) + n / 5;
}
int fun2( int n ){
    if( !n )
        return 0;
    return fun2( n / 2 ) + n / 2;
}
int main(){
    int t, n;
    llint num, a = 0, b = 1;
    scanf( "%d", &t );
    while( t-- ){
        scanf("%d", &n);
        printf("%d %d\n", fun2(n), fun5(n));
    }
}
