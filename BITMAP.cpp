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

int dx[]={1,0,0,-1};
int dy[]={0,1,-1,0};
int matrx[1000][1000],bio[1000][1000];
char polje[1000][1000];
queue<int>q;
int n,m,t,X,Y;
int main(){
	scanf("%d",&t);
	for(int ztr=0;ztr<t;ztr++){
		memset(polje,0,sizeof polje);
		memset(matrx,0,sizeof matrx);
		memset(bio,-1,sizeof bio);
		scanf("%d %d",&n,&m);
		for(int x=0;x<n;x++){
			scanf("%s",polje[x]);
		}
		for(int y=0;y<n;y++){
			for(int x=0;x<m;x++){
				if(polje[y][x]-'0'==1){
					bio[y][x]=1;
					q.push(x);
					q.push(y);
				}
			}
		}
		while(q.empty()==false){
			X=q.front(),q.pop();
			Y=q.front(),q.pop();
			for(int smjer=0;smjer<4;smjer++){
				if(X+dx[smjer]<0 || Y+dy[smjer]<0 || Y+dy[smjer]>n || X+dx[smjer]>m)continue;
				if(polje[Y+dy[smjer]][X+dx[smjer]]!=0 && bio[Y+dy[smjer]][X+dx[smjer]]==-1){
					q.push(X+dx[smjer]),q.push(Y+dy[smjer]);
					matrx[Y+dy[smjer]][X+dx[smjer]]+=matrx[Y][X]+1;
					bio[Y+dy[smjer]][X+dx[smjer]]=1;
				}
			}
		}
		for(int x=0;x<n;x++){
			for(int y=0;y<m;y++){
				printf("%d ",matrx[x][y]);
			}
			printf("\n");
		}
	//	printf("\n");
	}
}
