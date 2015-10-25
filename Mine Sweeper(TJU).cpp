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

int po[50][50];
char red[50];
int sx[]={1,1,1,0,0,-1,-1,-1};
int sy[]={1,0,-1,1,-1,1,0,-1};
queue<pair<int,int> >q;
char ploca[50][50];
char isp[50][50];
int main(){
	memset(po,0,sizeof po);
	memset(isp,0,sizeof isp);
	int n;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%s",ploca[x]);
		for(int y=0;y<n;y++)
			if(ploca[x][y]=='*')
				q.push(make_pair(x,y));
	}
	int a,b;
	while(!q.empty()){
		a=q.front().first,b=q.front().second;
		for(int y=0;y<8;y++){
			po[a+sx[y]][b+sy[y]]++;
		}
		q.pop();
	}
	bool tako=0;
	for(int x=0;x<n;x++){
		scanf("%s",red);
		for(int y=0;y<n;y++)
			if(red[y]=='x'){
				if(ploca[x][y]=='*')
					tako=1;
				isp[x][y]='0'+po[x][y];
			}else 
				isp[x][y]='.';
	}
	if(tako)
		for(int x=0;x<n;x++)
			for(int y=0;y<n;y++)
				if(ploca[x][y]=='*')
					isp[x][y]='*';
	for(int x=0;x<n;x++)
		printf("%s\n",isp[x]);
}
