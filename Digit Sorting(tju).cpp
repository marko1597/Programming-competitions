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

char niz[50][10];

int main(){
	int n, ans, br;
	while(1){
		ans = 0;
		scanf("%d", &n);
		if(!n) break;
		for( int x = 0; x < n; x++ ){
			br = 0;
			scanf("%s",niz[x]);
			sort( niz[x], niz[x]+strlen(niz[x]) );
			for( int i = 0; i < strlen( niz[x] ); i++ )
				br = br*10 + niz[ x ][ i ] - '0';
			ans = max( ans , br );
		}
		printf("%d\n", ans);
	}
}
