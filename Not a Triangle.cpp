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

int n,niz[2001],dp[1000001],maxx;
int main(){
	int ans=0;
	memset(niz,30,sizeof niz);
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d",niz+x);
		maxx=max(maxx,niz[x]);
	}
	sort(niz,niz+n);
	int c=0;
	for(int x=0;x<=maxx;x++){
		while(x>=niz[c]){
			c++;
		}
		dp[x]=n-c;
	}
	for(int x=0;x<n;x++){
		for(int y=x+1;y<n;y++){
			ans+=dp[(niz[x]+niz[y])*(niz[x]+niz[y]<maxx)]*(niz[x]+niz[y]<maxx);
		}
	}
	printf("%d\n",ans);
}
