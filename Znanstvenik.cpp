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

const int maxn = 1050;

bool im[maxn];
int tn, ans = 0;
char mat[maxn][maxn];

vector<int> cr[26];

int main(){
	int r,s;
	scanf("%d %d", &r, &s);
	for( int x = 0; x < r; x++ )
		scanf("%s", mat[x]);
	tn = s;
	for( int x = 0; x < r; x++ ){
		for( int y = 0; y < s; y++ ){
			if( im[y] )
				continue;
			cr[ mat[r -1 -x][y] -'a' ].push_back( y );
		}
		for( int i = 0; i < 26; i++ )
			for( int y = 0; y < cr[i].size(); y++ )
				if( cr[i].size() == 1 ){
					im[ cr[i][0] ] = 1;
					cr[i].pop_back();
					tn--;
				}else if( cr[i].size() > 1 )
					while( !cr[i].empty() )
						cr[i].pop_back();
		if( tn == 0 ){
			ans = r -x -1;
			break;
		}
	}
	printf("%d\n", ans);
}
