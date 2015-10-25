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

int tmp[7000];
int ans[7000];
int prost[7000];
void fak(int n){
	if(n==1 || n==0)
		return;
	for(int x=0;x<7000;x++){
		if(n%prost[x]==0){
			tmp[x]++;
			fak(n/prost[x]);
			break;
		}
	}
}
int main(){
	vector<int>val(70000+2,0),pr(70000+2),ne(70000+2);
	for(int x=2;x<70000;x++)
		pr[x]=x-1,ne[x]=x+1;
	for(int x=2;x*x<=70000;x=ne[x])
		for(int y=pr[70000/x+1];y>=x;y=pr[y]){
			val[x*y]=x;
			ne[pr[x*y]]=ne[x*y];
			pr[ne[x*y]]=pr[x*y];
		}
	int p=0;
	for(int x=2;x<70000;x++)
		if(!val[x])
			prost[p++]=x;
	int t,n,k;
	unsigned a=1;
	while(1){
		a=1;
		memset(ans,0,sizeof ans);
		scanf("%d %d",&n,&k);
		if(!n && !k)
			break;
		for(int x=0;x<k;x++){
			memset(tmp,0,sizeof tmp);
			fak(n-x);
			for(int y=0;y<7000;y++)
				ans[y]+=tmp[y];
		}
		for(int x=2;x<=k;x++){
			memset(tmp,0,sizeof tmp);
			fak(x);
			for(int y=0;y<7000;y++)
				ans[y]-=tmp[y];
		}
		for(int x=0;x<7000;x++)
			if(ans[x])
				for(int y=0;y<ans[x];y++)
					a*=prost[x];
		printf("%u\n",a);
	}
}
