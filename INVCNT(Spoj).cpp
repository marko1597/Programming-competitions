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

typedef long long llint;

const int M=200010;
int niz[M],niz2[M],niz3[M];
llint fw[M];
void ins(int a,int b){
	for(int x=a;x<M;x+=x&-x)
		fw[x]+=b;
}
llint gt(int a){
	llint ret=0;
	for(int x=a;x>0;x-=x&-x)
		ret+=fw[x];
	return ret;
}
bool cmp(int a,int b){
	return niz[a]<niz[b];
}
int main(){
	memset(niz,-1,sizeof niz);
	int t,n;
	llint ans;
	scanf("%d",&t);
	while(t--){
		ans=0;
		memset(fw,0,sizeof fw);
		scanf("%d",&n);
		for(int x=0;x<n;x++)
			niz2[x]=x;
		for(int x=0;x<n;x++)
			scanf("%d",niz+x);
		sort(niz2,niz2+n,cmp);
		niz3[niz2[0]]=0;
		int p=0;
		for(int x=1;x<n;x++)
			if(niz[niz2[x-1]]==niz[niz2[x]])
				niz3[niz2[x]]=p;
			else{
				niz3[niz2[x]]=++p;
			}
		for(int x=n-1;x>=0;x--){
			ans+=gt(niz3[x]);
			ins(niz3[x]+1,1);
		}
		printf("%lld\n",ans);
	}
}
