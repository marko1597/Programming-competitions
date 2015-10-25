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
#include <time.h>
#include <string.h>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
using namespace std;

char ploca[200][200];
int ans[5];
void park(int x,int y){
	int p=0;
	if(ploca[x][y]==0 || ploca[x+1][y]==0 || ploca[x][y+1]==0 || ploca[x+1][y+1]==0)return;
	if(ploca[x][y]=='#' || ploca[x+1][y]=='#' || ploca[x][y+1]=='#' || ploca[x+1][y+1]=='#')return;
	if(ploca[x][y]=='X')p++;
	if(ploca[x+1][y]=='X')p++;
	if(ploca[x][y+1]=='X')p++;
	if(ploca[x+1][y+1]=='X')p++;
	ans[p]++;
}
int main(){
	int r,s;
	memset(ans,0,sizeof ans);
	memset(ploca,0,sizeof ploca);
	scanf("%d %d",&r,&s);
	for(int x=0;x<r;x++){
		scanf("%s",ploca[x]);
	}
	for(int x=0;x<r;x++){
		for(int y=0;y<s;y++){
			park(x,y);
		}
	}
	for(int x=0;x<5;x++){
		printf("%d\n",ans[x]);
	}
}
