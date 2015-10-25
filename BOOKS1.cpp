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

int niz[1000],mi=10000000*500;
vector<int>ans;
int n,k;
int chk(int s){
	llint ss=0,m=0;
	vector<int>pa;
	for(int x=n-1;x>=0;x--)
		if((ss+=niz[x])>s && niz[x]<=s)
			m=max(m,ss-niz[x]),ss=niz[x],pa.push_back(x);
		else if(niz[x]>s)
			return 0;
	m=max(m,ss);
	reverse(pa.begin(),pa.end());
	if(pa.size()>k-1){
		ss=0;
		for(int x=pa[k-2];x<n;x++)
			ss+=niz[x];
		m=max(m,ss);
		if(mi>=m){
			mi=m;
			ans.clear();
			for(int i=0;i<k-1;i++)
				ans.push_back(pa[i]);
		}
	}
	if(pa.size()==k-1){
		if(mi>=m){
			mi=m;
			ans.clear();
			for(int i=0;i<pa.size();i++)
				ans.push_back(pa[i]);
			return 1;
		}
		return 0;
	}else if(pa.size()<k-1)
		return 1;
	else if(pa.size()>k-1)
		return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ans.clear();
		scanf("%d %d",&n,&k);
		scanf("%d",&niz[0]);
		int lo=0,hi=0,mid;
		mi=10000000*500;
		hi+=niz[0];
		for(int x=1;x<n;x++){
			scanf("%d",niz+x);
			hi+=niz[x];
		}
		while(lo<hi){
			mid=(lo+hi)/2;
			if(chk(mid))
				hi=mid;
			else
				lo=mid+1;
		}
		int p=0;	
		for(int x=0;x<n;x++)
			if(p<ans.size() && x==ans[p]){
				printf("%d / ",niz[x]);
				p++;
			}else
				printf("%d ",niz[x]);
		putchar('\n');
	}
}
