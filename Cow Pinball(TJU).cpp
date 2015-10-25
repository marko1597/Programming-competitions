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

int pira[30][30];
int dp[30][30];
int main(){
	int n,ans=0;
	scanf("%d",&n);
	for(int x=0;x<n;x++)
		for(int y=0;y<x+1;y++)
			scanf("%d",&pira[x][y]);
	dp[0][0]=pira[0][0];
	for(int x=1;x<n;x++)
		for(int y=0;y<=n;y++){
			if(y-1>=0 && dp[x-1][y-1]+pira[x][y]>dp[x][y])
				dp[x][y]=dp[x-1][y-1]+pira[x][y];
			if(y<x && dp[x-1][y]+pira[x][y]>dp[x][y])
				dp[x][y]=dp[x-1][y]+pira[x][y];
		}
	for(int x=0;x<n;x++)
		ans=max(dp[n-1][x],ans);
	printf("%d\n",ans);
}
