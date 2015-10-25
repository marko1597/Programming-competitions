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

int r,s,mink,brojkljuceva=0,mx,my;
int nizx[20];
int nizy[20];
char polje[40][40];
int udaljen[40][40];
bool bio[40][40];
int dist[20][20];
int sx[]={0,0,1,-1};
int sy[]={1,-1,0,0};
int bfs(int start,int end){
	memset(udaljen,0,sizeof udaljen);
	memset(bio,0,sizeof bio);
	int px,py,x,y;
	queue<pair<int,int> >q;
	bio[nizx[start]][nizy[start]]=0;
	q.push(make_pair(nizx[start],nizy[start]));
	udaljen[nizx[start]][nizy[start]]=0;
	while(!q.empty()){
		px=q.front().first,py=q.front().second;
		for(int g=0;g<4;g++){
			x=px+sx[g],y=py+sy[g];
			if(x<0 || y<0 || x>=r || y>=s)continue;
			if(polje[x][y]=='#')continue;
			if(bio[x][y])continue;
			bio[x][y]=1;
			udaljen[x][y]=udaljen[px][py]+1;
			q.push(make_pair(x,y));
		}
		q.pop();
	}
	return udaljen[nizx[end]][nizy[end]];
}
int mins=5000000;
bool biok[20];
void rek(int a=brojkljuceva,int b=0,int c=0){
	if(b==mink){
		mins=min(mins,c);
		return;
	}
	if(c>=mins)
		return;
	for(int x=0;x<brojkljuceva;x++){
		if(!biok[x]){
			biok[x]=1;
			rek(x,b+1,c+dist[a][x]);
			biok[x]=0;
		}
	}
}
int main(){
	scanf("%d %d %d",&r,&s,&mink);
	for(int x=0;x<r;x++){
		scanf("%s",polje[x]);
		for(int y=0;y<s;y++)
			if(polje[x][y]=='K'){
				nizx[brojkljuceva]=x;
				nizy[brojkljuceva]=y;
				brojkljuceva++;
			}else if(polje[x][y]=='X'){
				mx=x;
				my=y;
			}
	}
	nizx[brojkljuceva]=mx,nizy[brojkljuceva]=my;
	for(int x=0;x<=brojkljuceva;x++)
		for(int y=0;y<=brojkljuceva;y++)
			dist[x][y]=bfs(x,y);
	rek();
	printf("%d\n",mins);
}
