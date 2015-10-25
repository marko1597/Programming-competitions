#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string.h>
#include <algorithm>
#include <queue>
using namespace std;

struct point{
	int x, y;
	point(int _x=0,int _y=0):x(_x),y(_y){}
}poz;
int dx[]={1,0,0,-1};
int dy[]={0,1,-1,0};
int matrx[50+2][50+2],bio[50+2][50+2],r,s,px,py;
char polje[506+2][50+2],c;
queue<point>q;
	
int main(){
	memset(polje,0,sizeof polje);
	memset(matrx,0,sizeof matrx);
	memset(bio,-1,sizeof bio);
	scanf("%d %d",&r,&s);
	for(int x=1;x<=r;x++){
		scanf("%s",polje[x]+1);
	}
	for(int y=1;y<=r;y++){
		for(int x=1;x<=s;x++){
			if(polje[y][x]=='.' || polje[y][x]=='#' || polje[y][x]=='M' || polje[y][x]=='P'){
				if(polje[y][x]=='M'){
					poz=point(x,y);
				}
				if(polje[y][x]=='P'){
					px=x;py=y;
				}
			}
		}
	}
	q.push(poz);
	bio[poz.x][poz.y]=1;
	while(q.empty()==false){
		poz=q.front();
		for(int smjer=0;smjer<4;smjer++){
			if(polje[poz.y+dy[smjer]][poz.x+dx[smjer]]!=0 && polje[poz.y+dy[smjer]][poz.x+dx[smjer]]!='#' && bio[poz.x+dx[smjer]][poz.y+dy[smjer]]==-1){
				q.push(point(poz.x+dx[smjer],poz.y+dy[smjer]));
				matrx[poz.x+dx[smjer]][poz.y+dy[smjer]]+=matrx[poz.x][poz.y]+1;
				bio[poz.x+dx[smjer]][poz.y+dy[smjer]]=1;
			}
		}
		q.pop();
	}
	if(matrx[px][py]==0){
		printf("-1");
	}else{
		printf("%d",matrx[px][py]*2);
	}
}
