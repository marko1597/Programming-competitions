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
#include <stack>
#include <vector>
using namespace std;

int main(){
		string a[200];
	int r,s,ploca[200][200];
	memset(ploca,0,sizeof ploca);
	scanf("%d %d",&r,&s);
	for(int x=0;x<r;x++){
		cin >> a[x];
	}
	for(int x=0;x<r;x++){
		for(int y=0;y<s;y++){
			if(a[x][y]=='*'){
				ploca[x][y]=-1;
				if(ploca[x+1][y]!=-1)ploca[x+1][y]+=1;
				if(ploca[x-1][y]!=-1 && x-1>=0)ploca[x-1][y]+=1;
				if(ploca[x][y+1]!=-1)ploca[x][y+1]+=1;
				if(ploca[x][y-1]!=-1 && y-1>=0)ploca[x][y-1]+=1;
				if(ploca[x+1][y+1]!=-1)ploca[x+1][y+1]+=1;
				if(ploca[x-1][y+1]!=-1 && x-1>=0)ploca[x-1][y+1]+=1;
				if(ploca[x+1][y-1]!=-1 && y-1>=0)ploca[x+1][y-1]+=1;
				if(ploca[x-1][y-1]!=-1 && x-1>=0 && y-1>=0)ploca[x-1][y-1]+=1;
			}
		}
	}
	for(int x=0;x<r;x++){
		for(int y=0;y<s;y++){
			if(ploca[x][y]==-1){
				putchar('*');
				continue;
			}
			printf("%d",ploca[x][y]);
		}
		putchar('\n');
	}
	putchar('\n');
}
