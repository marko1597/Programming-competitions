#include <cstdio>
#include <cstring>
#include <iostream>
#include <math.h>
#include <cmath>
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

char polje[450][450];
int dp[450][450];

int main(){
	memset(dp,0,sizeof dp);
	int r,s,ans=0;
	scanf("%d %d",&r,&s);
	for(int x=0;x<r;x++)
		scanf("%s",polje[x]);
	for(int x=0;x<r;x++){
		for(int y=1;y<=s;y++)
			dp[x][y]+=dp[x][y-1]+(polje[x][y-1]=='X');
	}
	int rr,dd;
	for(int x=1;x<=s;x++)
		for(int y=x;y<=s;y++){
			rr=0,dd=0;
			for(int z=0;z<r;z++)
				if(!(dp[z][y]-dp[z][x-1])){
					if(++rr>dd)
						dd=rr;
				}else{
					rr=0;
				}
			if(dd)
				ans=max(ans,2*dd+2*(y-x+1));
		}
	printf("%d\n",ans-1);
}
