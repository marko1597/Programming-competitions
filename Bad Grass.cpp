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

int r,c,nextx,nexty,ans=0;
int sx[]={0,0,1,-1,1,-1,-1,1};
int sy[]={1,-1,0,0,1,-1,1,-1};
int ploca[3000][3000];
bool bio[3000][3000];
queue<pair<int,int> >q;
pair<int,int>k;

void diagonal_bfs(int x,int y){
	q.push(make_pair(x,y));
	bio[x][y]=true;
	while(q.empty()==false){
		k=q.front(),q.pop();
		for(int f=0;f<8;f++){
			nextx=k.first+sx[f],nexty=k.second+sy[f];
			if(nextx<0 || nextx>=r || nexty<0 || nexty>=c)continue;
			if(bio[nextx][nexty]==true)continue;
			if(ploca[nextx][nexty]==0)continue;
			bio[nextx][nexty]=true;
			q.push(make_pair(nextx,nexty));
		}
	}
}
int main(){
	scanf("%d %d",&r,&c);
	for(int x=0;x<r;x++){
		for(int y=0;y<c;y++){
			scanf("%d",&ploca[x][y]);
		}
	}
	for(int x=0;x<r;x++){
		for(int y=0;y<c;y++){
			if(ploca[x][y]!=0 && bio[x][y]==false){
				ans++;
				diagonal_bfs(x,y);
			}
		}
	}
	printf("%d\n",ans);
}
