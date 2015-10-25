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

const int N=10000;
pair<int,int>niz[N];
bool bio[N];
bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.second!=b.second)
		return a.second>b.second;
	return a.first>b.first;
}
int main(){
	int n,ans=0,tx,ty;
	scanf("%d",&n);
	for(int x=0;x<n;x++)
		scanf("%d %d",&niz[x].first,&niz[x].second);
	sort(niz,niz+n,cmp);
	for(int x=0;x<n;x++)
		if(!bio[x]){
			ans++;
			tx=niz[x].first;
			ty=niz[x].second;
			for(int y=0;y<n;y++)
				if(!bio[y] && tx>=niz[y].first && ty>=niz[y].second)
					bio[y]=1,tx=niz[y].first,ty=niz[y].second;
		}
	printf("%d\n",ans);
}
