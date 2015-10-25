#include <cstdio>
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

typedef unsigned long long llint;

int r,c;
char polje[1005][1005];
bool bio[1005][1005];
int sx[]={0,0,1,-1};
int sy[]={1,-1,0,0};
int bfs(int xx,int yy){
	int anss=0;
	queue<pair<int,int> >q;
	pair<int,int>cord;
	q.push(make_pair(xx,yy));
	bio[xx][yy]=true;
	while(q.empty()==false){
		anss++;
		cord=q.front(),q.pop();
		int x=cord.first,y=cord.second;
		bio[x][y]=true;
		for(int cc=0;cc<4;cc++){
			int nextx=x+sx[cc];int nexty=y+sy[cc];
			if(nextx>=r || nexty>=c || nextx<0 || nexty<0)continue;
			if(polje[nextx][nexty]=='#' || bio[nextx][nexty]==true)continue;
			bio[nextx][nexty]=true;
			q.push(make_pair(nextx,nexty));
		}
	}
	return anss;
}
int main(){
	scanf("%d %d",&r,&c);
	for(int x=0;x<r;x++){
		scanf("%s",polje[x]);
	}
	int ans=0;
	for(int x=0;x<r;x++){
		for(int y=0;y<c;y++){
			if(bio[x][y]==true || polje[x][y]=='#')continue;
			int ccaa=bfs(x,y);
			ans=max(ans,ccaa);
		}
	}
	printf("%d\n",ans);
	//system("pause");
}
