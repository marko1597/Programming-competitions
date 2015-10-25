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

const int maxn = 500005;
const int maxp = 800;
typedef long long llint;

llint niz[ maxn ];
vector<int>value(maxp+2,0),pr(maxp+2),ne(maxp+2);
vector<int>prost;
stack<int> uzet;
inline llint calc( llint n , llint base){
    return ( n*base - 1 ) / ( base - 1 );
}
inline llint fact( llint n ){
    llint ret = 1;
    int l1,l2;
    l1 = prost.size();
    for( int x = 0; x < l1 && n != 1; x++ ){
        uzet.push( x );
        while( n % prost[x] == 0 )
            n /= prost[x], niz[x] *= prost[ x ];
        if( niz[ x ] == 1 )
            uzet.pop();
    }
    if( n != 1 ){
        ret *= calc( n, n );
    }
    while( uzet.size() ){
        ret *= calc( niz[ uzet.top() ], prost[ uzet.top() ] );
        niz[ uzet.top() ] = 1;
        uzet.pop();
    }
    return ret;
}
int main(){
    for(int x=2;x<=maxp;x++)
        pr[x]=x-1,ne[x]=x+1;
    for(int x=2;x*x<=maxp;x=ne[x])
        for(int y=pr[maxp/x+1];y>=x;y=pr[y]){
            value[x*y]=x;
            ne[pr[x*y]]=ne[x*y];
            pr[ne[x*y]]=pr[x*y];
        }
    for(int x=2;x<=maxp;x++)
        if(!value[x])
            prost.push_back(x);
    for( int x = 0; x < maxn; x++ )
        niz[ x ] = 1;
    llint t, n;
    scanf("%lld", &t );
    while( t-- ){
        scanf("%lld", &n);
        printf("%lld\n", fact( n ) - n );
    }
}
