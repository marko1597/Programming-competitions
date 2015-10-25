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
#include <string.h>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main(){
	int n,k;
	int dp[100005];
	scanf("%d %d",&n,&k);
	memset(dp,0,sizeof dp);
	dp[0]=1;
	for(int x=1;x<=n;x++){
		for(int y=1;y<=k;y++){
			if(y>x)break;
			dp[x]=dp[x]+dp[x-y];
			if(dp[x]>=1021987)dp[x]%=1021987;
		}
	}
	printf("%d\n",dp[n]);
}
