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
	int m,n;
	int niz[105];
	int dp[10005];
	memset(dp,0,sizeof dp);
	scanf("%d %d",&m,&n);
	for(int x=0;x<n;x++){
		scanf("%d",&niz[x]);
	}
	sort(niz,niz+n);
	for(int x=1;x<=m;x++){
		for(int y=0;y<n;y++){
			if(niz[y]>x)break;
			dp[x]+=dp[x-niz[y]]+1;
		}
		dp[x]%=8192;
	}
	printf("%d\n",dp[m]%8192);
}
