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

pair<int,int> niz[200];
int dp[200];
int main(){
	memset(dp,0x3f,sizeof dp);
	memset(niz,-1,sizeof niz);
	int n,_a,_b,_c;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d %d %d",&_a,&_b,&_c);
		niz[_a].first=_b;
		niz[_a].second=_c;
	}
	dp[0]=0;
	for(int x=1;x<=100;x++)
		for(int y=1;y<=6;y++){
			if((x-y)>=0)
				if(niz[x-y].first==0 && x-y+niz[x-y].second>=0)
					dp[x-y+niz[x-y].second]=min(dp[x-y],dp[x-y+niz[x-y].second]);
				else if(niz[x-y].first==1 && x-y-niz[x-y].second>=0)
					dp[x-y-niz[x-y].second]=min(dp[x-y],dp[x-y-niz[x-y].second]);
				else if(niz[x-y].first==2)
					dp[niz[x-y].second]=min(dp[x-y],dp[niz[x-y].second]);
				else 
					dp[x]=min(dp[x],dp[x-y]+1);
		}
	if(dp[100]==0x3f3f3f3f)
		printf("-1");
	else
		printf("%d",dp[100]);
}
