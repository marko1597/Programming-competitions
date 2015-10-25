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

int sx[]={0,0,1,-1};
int sy[]={1,-1,0,0};
bool bio [255][255];
char ploca[255][255];
int r,c;
int ko=0,vu=0;
void bfs(int x,int y){
	queue<pair<int,int> >q;
	pair<int,int> p;
	q.push(make_pair(x,y));
	bio[x][y]=true;
	int v=0,k=0;
	while(q.empty()==false){
		p=q.front(),q.pop();
		if(ploca[p.first][p.second]=='v')v++;
		if(ploca[p.first][p.second]=='k')k++;
		for(int x=0;x<4;x++){
			int nextx=p.first+sx[x],nexty=p.second+sy[x];
			if(nextx<0 || nexty<0 || nextx>=r ||nexty>=c)continue;
			if(bio[nextx][nexty]==true)continue;
			if(ploca[nextx][nexty]=='#')continue;
			bio[nextx][nexty]=true;
			q.push(make_pair(nextx,nexty));
		}
	}
	if(k>v)v=0;
	else k=0;
	ko+=k;
	vu+=v;
}
int main(){
	scanf("%d %d",&r,&c);
	for(int x=0;x<r;x++){
		scanf("%s",ploca[x]);
	}
	for(int x=0;x<r;x++){
		for(int y=0;y<c;y++){
			if(bio[x][y]==true || ploca[x][y]=='#')continue;
			bfs(x,y);
		}
	}
	printf("%d %d\n",ko,vu);
	//system("pause");
}
