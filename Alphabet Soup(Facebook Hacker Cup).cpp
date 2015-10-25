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

int brc[ 256 ];
char in[ 5000 ];
char cc[] = "ACEHKPRU";

int main(){
	int t,ans;
	scanf("%d", &t);
	gets(in);
	for( int r = 0; r < t; r++ ){
		ans = 99999;
		gets( in );
		for( int x = 0; in[x]!=0 ; x++ )
			brc[ in[ x ] ]++;

		for( int x = 0; x < 8; x++ )
			if( cc[ x ] == 'C' )
				ans = min( brc[ cc[ x ] ] / 2, ans );
			else
				ans = min( brc[ cc[ x ] ], ans );
		printf("Case #%d: %d\n", r+1, ans );
		memset( brc, 0 , sizeof brc );
	}
}
