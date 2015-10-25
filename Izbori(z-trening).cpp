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

const int maxn = 1050;

llint niz[ maxn ];

int main(){
	llint n,ans = 0;
	scanf("%lld", &n);
	for( int x = 0; x < n; x++ )
		scanf("%lld", niz + x );
	sort( niz, niz + n );
	for( int x = 0; x < n/2+1; x++ )
		ans += niz[x]/2 +1;
	printf("%lld\n",ans);
}
