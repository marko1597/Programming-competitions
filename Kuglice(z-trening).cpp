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

const int maxn = 100000;

int niz[ maxn ];
int n, m;
llint b1, b2;

bool moze(int l){
	b1=b2=0;
	for( int x = 0; x < n; x++ )
		if( niz[ x ] > l )
			b1 += niz[ x ] - l;
		else if( niz[ x ] < l )
			b2 += l - niz[ x ];
	return b2 >= b1 && b1 <= m;
}
int main(){
	scanf("%d %d", &n, &m);
	int lo = 0,hi = 1000000000,mid;
	for( int x = 0; x < n; x++ )
		scanf("%d", niz + x);
	while(lo < hi){
		mid = ( lo + hi ) / 2;
		if( moze(mid) )
			hi = mid;
		else
			lo = mid +1;
	}
	printf("%d\n",lo);
}
