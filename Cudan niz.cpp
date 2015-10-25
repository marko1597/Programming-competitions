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

vector<int> nb,pb;
int zbz( int n ){
    int ret = 0;
    while( n )
        ret += n%10, n /= 10;
    return ret;
}
int up( int n ){
    if( n > pb.size() )
        return nb[ n - pb.size() - 1 ];
    return pb[ n - 1 ];
}
int main(){
    int n;
    scanf("%d", &n);
    vector<int>value(n+2,0),prev(n+2),next(n+2);
	for(int x=2;x<=n+1;x++){
		prev[x]=x-1;
		next[x]=x+1;
	}
	for(int x=2;x*x<=n+1;x=next[x]){
		for(int y=prev[n/x+1];y>=x;y=prev[y]){
			value[x*y]=x;
			next[prev[x*y]]=next[x*y];
			prev[next[x*y]]=prev[x*y];
		}
	}
	value[ 1 ] = 0;
	for( int x = 1; x <= n + 1; x++ )
        if( value[ x ] )
            nb.push_back(x);
        else
            pb.push_back(x);
    printf("%d\n", up( n-1 ) + zbz( up( n ) ) + up( n + 1) );
}
