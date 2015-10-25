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

const int MaxN=10010;
int dist[MaxN];
vector<int>edge[MaxN],cost[MaxN];
char s1[20],s2[20];
map<string,int>ime;
int dijkstra(int start,int end){
	memset(dist,0x3f,sizeof dist);
	dist[start]=0;
	priority_queue<pair<int,int> ,vector<pair<int,int> >,greater<pair<int,int> > >pq;
	pq.push(make_pair(dist[start],start));
	while(!pq.empty()){
		pair<int,int>t=pq.top();
		int u=t.second;
		pq.pop();
		if(u==end)return dist[end];
		if(t.first>dist[u])continue;
		for(int x=0;x<edge[u].size();x++){
			if(dist[u]+cost[u][x]<dist[edge[u][x]]){
				dist[edge[u][x]]=dist[u]+cost[u][x];
				pq.push(make_pair(dist[edge[u][x]],edge[u][x]));
			}
		}
	}
	return dist[end];
}
int main(){
	int T,N,M,a,b;
	scanf("%d",&T);
	for(int tt=0;tt<T;tt++){
		ime.clear();
		scanf("%d",&N);
		for(int x=1;x<=N;x++){
			edge[x].clear();
			cost[x].clear();
			scanf("%s %d",s1,&M);
			ime[s1]=x;
			for(int y=0;y<M;y++){
				scanf("%d %d",&a,&b);
				edge[x].push_back(a);
				cost[x].push_back(b);
			}
		}
		scanf("%d",&M);
		for(int x=0;x<M;x++){
			scanf("%s %s",s1,s2);
			printf("%d\n",dijkstra(ime[s1],ime[s2]));
		}
	}
}
