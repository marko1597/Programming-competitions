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

char ploca[50][50];
int locx=0,locy=0;
int sx[]={-1,1,0,0};
int sy[]={0,0,-1,1};
int nextx,nexty;
int n;
int s;
int abb(int n){
	if(n<0)return n*-1;
	return n;
}
void nar(char a){
	if(a=='U')s=0;
	else if(a=='D')s=1;
	else if(a=='L')s=2;
	else s=3;
	nextx=locx+sx[s];
	nexty=locy+sy[s];
	if(nextx<0 || nextx>=n || nexty<0 || nexty>=n)return;
	if(abb(sx[s])==0){
		if(ploca[locx][locy]=='.')ploca[locx][locy]='-';
		else if(ploca[locx][locy]=='|')ploca[locx][locy]='+';
		if(ploca[nextx][nexty]=='.')ploca[nextx][nexty]='-';
		else if(ploca[nextx][nexty]=='|')ploca[nextx][nexty]='+';
	}else {
		if(ploca[locx][locy]=='.')ploca[locx][locy]='|';
		else if(ploca[locx][locy]=='-')ploca[locx][locy]='+';
		if(ploca[nextx][nexty]=='.')ploca[nextx][nexty]='|';
		else if(ploca[nextx][nexty]=='-')ploca[nextx][nexty]='+';
	}
	locx=nextx;
	locy=nexty;
}
int main(){
	memset(ploca,'.',sizeof ploca);
	char niz[300];
	scanf("%d",&n);
	scanf("%s",niz);
	int i=strlen(niz);
	for(int x=0;x<i;x++){
		nar(niz[x]);
	}
	for(int x=0;x<n;x++){
		for(int y=0;y<n;y++){
			printf("%c",ploca[x][y]);
		}
		printf("\n");
	}
}
