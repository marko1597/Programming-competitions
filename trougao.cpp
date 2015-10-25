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

typedef long double lld;

lld abb(lld n){
	if(n<0)return n*-1;
	return n;
}
lld povrsina(lld x1,lld y1,lld x2,lld y2,lld x3,lld y3){
	return 0.5*abb(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
}
int main(){
	int n,ans=0;
	pair<int,int>niz[65];
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d %d",&niz[x].first,&niz[x].second);
	}
	for(int x=0;x<n;x++)
		for(int y=x+1;y<n;y++)
			for(int z=y+1;z<n;z++){
				int br=0;
				for(int cc=0;cc<n;cc++){
					if(povrsina((lld)niz[x].first,(lld)niz[x].second,(lld)niz[y].first,(lld)niz[y].second,(lld)niz[z].first,(lld)niz[z].second)==
						povrsina((lld)niz[x].first,(lld)niz[x].second,(lld)niz[y].first,(lld)niz[y].second,(lld)niz[cc].first,(lld)niz[cc].second)+
						povrsina((lld)niz[y].first,(lld)niz[y].second,(lld)niz[z].first,(lld)niz[z].second,(lld)niz[cc].first,(lld)niz[cc].second)+
						povrsina((lld)niz[z].first,(lld)niz[z].second,(lld)niz[x].first,(lld)niz[x].second,(lld)niz[cc].first,(lld)niz[cc].second))br++;
				}
				ans=max(ans,br);
			}
	printf("%d\n",ans);
}
