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

int ploca[700][700];
int r,s;
bool bio[700][700];
int sx[]={0,0,1,-1};
int sy[]={1,-1,0,0};
pair<int,int>tre;
queue<pair<int,int> >q;
int nextx,nexty;
void bfs(int x,int y){
	q.push(make_pair(x,y));
	bio[x][y]=true;
	while(q.empty()==false){
		tre=q.front();q.pop();
		for(int c=0;c<4;c++){
			nextx=tre.first+sx[c];nexty=tre.second+sy[c];
			if(nextx<0 || nextx>=r || nexty<0 || nexty>=s)continue;
			if(bio[nextx][nexty]==true)continue;
			if(ploca[nextx][nexty]==0)continue;
			bio[nextx][nexty]=true;
			q.push(make_pair(nextx,nexty));
		}
	}
}
int main(){
	scanf("%d %d",&r,&s);
	int ans=0;
	for(int x=0;x<r;x++){
		for(int y=0;y<s;y++){
			scanf("%d",&ploca[x][y]);
		}
	}
	for(int x=0;x<r;x++){
		for(int y=0;y<s;y++){
			if(ploca[x][y]==0 || bio[x][y]==true)continue;
			bfs(x,y);
			ans++;
		}
	}
	printf("%d\n",ans);
}
