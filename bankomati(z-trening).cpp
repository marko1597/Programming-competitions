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

int niz[50],dp[1000001],n;
int gre(int s){
	int ret=0;
	for(int x=n-1;x>=0;x--)
		ret+=s/niz[x],s%=niz[x];
	return ret;
}
int main(){
	int ans=0;
	for(int x=0;x<=1000000;x++)
		dp[x]=999999999;
	scanf("%d",&n);
	for(int x=0;x<n;x++)
		scanf("%d",niz+x);
	sort(niz,niz+n);
	dp[0]=0;
	for(int x=1;x<=1000000;x++)
		for(int y=0;y<n;y++)
			if(x>=niz[y])
				dp[x]=min(dp[x-niz[y]]+1,dp[x]);
	for(int x=1;x<=1000000;x++)
		if(dp[x]!=gre(x)){
			ans=x;
			break;
		}
	printf("%d\n",ans);
}
