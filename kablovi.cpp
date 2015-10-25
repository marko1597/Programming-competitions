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

vector<vector<lld > >graf;
vector<pair<int,int> >kor;
lld abb(lld n){
	if(n<0)return n*-1;
	return n;
}
lld udalj(pair<int,int> a,pair<int,int> b){
	int x=abb(a.first-b.first),y=abb(a.second-b.second);
	return sqrt(lld(x*x+y*y));
}
int main(){
	int n,a,b;
	scanf("%d",&n);
	vector<lld>T;
	T.assign(n,1000000);
	graf.assign(n,T);
	for(int x=0;x<n;x++){
		scanf("%d %d",&a,&b);
		kor.push_back(make_pair(a,b));
	}
	for(int x=0;x<n;x++){
		for(int y=0;y<n;y++){
			if(x==y)continue;
			graf[x][y]=udalj(kor[x],kor[y]);
		}
	}
	vector<bool>bio(n,0);
	vector<lld>dist(n,1000000);
	dist[0]=0;
	lld MST=0;
	for(int i=0;i<n;i++){
		int tko;
		lld udaljenost=1000000;
		for(int j=0;j<n;j++){
			if(!bio[j] && dist[j]<udaljenost){
				tko=j;udaljenost=dist[j];
			}
		}
		bio[tko]=1;
		MST+=udaljenost;
		for(int j=0;j<n;j++)
			if(dist[j]>graf[tko][j])
				dist[j]=graf[tko][j];
	}
	printf("%.2f\n",float(MST));
}
