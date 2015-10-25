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

#define MAXINT 2147483647
#define MAX 10000
int graph[MAX][MAX];
int total;
int distances[MAX];
int father[MAX];
bool visit[MAX]; 

void dijkstra(int start)
{
	priority_queue<pair<int,int> >queue;
	pair<int,int>nodotmp;
	int i,j;
	for (int i=1;i<=total;i++){
		distances[i]=MAXINT;
		father[i]=-1;
		visit[i]=false;
	}
	distances[start]=0;
	queue.push(pair<int,int>(distances[start], start));
	while(!queue.empty()){
		nodotmp=queue.top();
		queue.pop();
		i=nodotmp.second;
		if(!visit[i]){
		visit[i]=true;
		for(j=1;j<=total;j++)
			if(!visit[j] && graph[i][j] > 0 && distances[i] + graph[i][j] < distances[j]) {
				distances[j] = distances[i] + graph[i][j];
				father[j] = i;
				queue.push(pair <int,int>(-distances[j], j));
			}
		}
	}
}
void getPath(int end) {
	//while(father[end]!=-1){
	//	printf("%d\n",father[end]);
	//	end=father[end];
	//}
	printf("%d\n",distances[end]);
}
int main(){
	int a,b,c,n,z;
	int tedges;
	char ime[150];
	map<string,int>X;
	scanf("%d",&z);
	for(int k=0;k<z;k++){
		total=0;
		memset(graph, 0, sizeof graph);
		scanf("%d",&n);
		total=n;
		for(int x=0;x<n;x++){
			scanf("%s",ime);
			X[ime]=x;
			scanf("%d",&a);
			for(int y=0;y<a;y++){
				scanf("%d %d",&b,&c);
				graph[x][b-1]=c;
			}
		}
		scanf("%d",&n);
		for(int x=0;x<n;x++){
			scanf("%s",ime);
			dijkstra(X[ime]);
			scanf("%s",ime);
			getPath(X[ime]);
		}
		X.clear();
	}
	system("pause");
}
