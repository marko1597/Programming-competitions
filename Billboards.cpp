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

int niz[ 1500 ], w, h, px = 0;
char in[ 1500 ];
bool stane(int vel){
	int ww = 0,hh = vel;
	for( int x = 0; x < px; x++ ){
		if( niz[ x ] * vel > w )
			return 0;
		if( ww + niz[ x ] * vel >= w)
			ww = 0, hh += vel;
		ww += niz[ x ] * vel + vel;
	}
	if( hh > h )
		return 0;
	return 1;
}
int main(){
	int t, s = 1, v = 0;
	scanf("%d", &t);
	for( int lll = 0; lll<t; lll++ ){
		px = 0, s = 0;
		scanf("%d %d", &w, &h);
		gets( in );

		for( int x = 0; x < strlen( in ); x++ ){
			v = 0;
			while( in[x] != ' ' && x < strlen( in ) ){
				x++;
				v++;
			}
			if( v > 0 )
				niz[ px++ ] = v;
		}

		while( stane( s ) )
			s++;

		printf("Case #%d: %d\n", lll + 1, s - 1);
	}
}
