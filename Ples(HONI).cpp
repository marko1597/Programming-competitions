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

vector<int>mn,mp,dn,dp;
int main(){
	int n,p,ans=0;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d",&p);
		if(p<0)
			mn.push_back(p*-1);
		else 
			mp.push_back(p);
	}
	for(int x=0;x<n;x++){
		scanf("%d",&p);
		if(p<0)
			dn.push_back(p*-1);
		else 
			dp.push_back(p);
	}
	int pp=0;
	sort(mn.begin(),mn.end());
	sort(mp.begin(),mp.end());
	sort(dn.begin(),dn.end());
	sort(dp.begin(),dp.end());
	for(int x=0;x<mn.size();x++){
		while(pp<dp.size() && mn[x]<=dp[pp])
			pp++;
		if(pp<dp.size() && mn[x]>dp[pp]){
			ans++;
			pp++;
		}
	}
	pp=0;
	for(int x=0;x<dn.size();x++){
		while(pp<mp.size() && dn[x]<=mp[pp])
			pp++;
		if(pp<mp.size() && dn[x]>mp[pp]){
			ans++;
			pp++;
		}
	}
	printf("%d\n",ans);
}
