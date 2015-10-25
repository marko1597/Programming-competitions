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

const int maxn=1050;
int dp[maxn],ne[maxn];
int w[maxn],s[maxn],pp[maxn];
bool cmp(const int &a,const int &b){
	return w[a]<w[b];
}
int main(){
	int n=0,ans=0;
	while(scanf("%d %d",w+n,s+n)==2)
		n++;
	for(int x=0;x<n;x++)
		pp[x]=x;
	sort(pp,pp+n,cmp);
	int po=n-1;
	for(int x=n-1;x>=0;--x){
		dp[x]=1;
		for(int y=x+1;y<n;++y)
			if(w[pp[x]]<w[pp[y]] && s[pp[x]]>s[pp[y]] && dp[y]+1>dp[x])
				dp[x]=dp[y]+1,ne[x]=y;
		if(dp[x]>dp[po])po=x;
	}
	ans=dp[po];
	printf("%d\n",ans);
	for(int x=0;x<ans;x++){
		printf("%d\n",pp[po]+1);
		po=ne[po];
	}
	return 0;
}

