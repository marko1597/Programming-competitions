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

char ploca[100][105];
bool bio[100][105];
int sx[]={0,0,1,-1};
int sy[]={1,-1,0,0};
int r,s,n,ko;
stack<pair<int,int> >pom;
void dfs(int xx,int yy){
	if(xx<0 || xx>=r || yy<0 || yy>=s)return;
	if(bio[xx][yy]==true || ploca[xx][yy]=='.' || ploca[xx][yy]==0)return;
	bio[xx][yy]=true;
	ploca[xx][yy]='.';
	pom.push(make_pair(xx,yy));
	for(int c=0;c<4;c++){
		dfs(xx+sx[c],yy+sy[c]);
	}
}
void proc(stack<pair<int,int> > &k){
	int pomak=99999;
	pair<int,int>koc;
	stack<pair<int,int> >dr;
	while(k.empty()==false){
		koc=k.top();
		bio[koc.first][koc.second]=false;
		dr.push(k.top());k.pop();
		int x=0;
		for(x=koc.first;x<r;x++){
			if(ploca[x][koc.second]=='x')break;
		}
		pomak=min(pomak,x-koc.first-1);
	}
	while(dr.empty()==false){
		koc=dr.top();
		bio[koc.first+pomak][koc.second]=true;
		dr.pop();
		ploca[koc.first+pomak][koc.second]='x';
	}
}
void baci(int b,int v){
	if(b%2==0){
		for(int x=0;x<s;x++){
			if(ploca[v][x]=='x'){
				ploca[v][x]='.';
				break;
			}
		}
	}else{
		for(int x=s-1;x>=0;x--){
			if(ploca[v][x]=='x'){
				ploca[v][x]='.';
				break;
			}
		}
	}
	memset(bio,0,sizeof bio);
	for(int x=r-1;x>=0;x--){
		for(int y=0;y<s;y++){
			if(bio[x][y]==true || ploca[x][y]=='.' || ploca[x][y]==0)continue;
			dfs(x,y);
			proc(pom);
		}
	}
}
int  main(){
	scanf("%d %d",&r,&s);
	for(int x=0;x<r;x++){
		scanf("%s",ploca[x]);
	}
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d",&ko);
		baci(x,r-ko);
	}
	for(int x=0;x<r;x++){
		for(int y=0;y<s;y++){
			printf("%c",ploca[x][y]);
		}
		printf("\n");
	}
}	 
