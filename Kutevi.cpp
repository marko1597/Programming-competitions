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

int main(){
	bool dp[360];
	memset(dp,0,sizeof dp);
	int n,k,znam[400];
	scanf("%d %d",&n,&k);
	for(int x=0;x<n;x++){
		scanf("%d",&znam[x]);
		dp[znam[x]]=1;
	}
	for(int x=0;x<360;x++){
		if(dp[x]==0)continue;
		for(int y=0;y<n;y++){
			if(dp[(x+znam[y])%360]==0){
				znam[n]=(x+znam[y])%360;
				dp[znam[n]]=1;
				n++;
			}
			dp[(x+znam[y])%360]=1;
		}
	}
	int a;
	for(int x=0;x<k;x++){
		scanf("%d",&a);
		if(dp[a]==1)printf("DA\n");
		else printf("NE\n");
	}
}
