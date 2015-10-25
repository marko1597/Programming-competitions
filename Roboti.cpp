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

int r,s;
int ans=0;
int sx[]={1,1,1,0,0,0,-1,-1,-1};
int sy[]={-1,0,1,-1,0,1,-1,0,1};
int aBs(int n){
	if(n<0)return n*-1;
	return n;
}
int posix,posiy;
char ploca[100][105];
char mov[100][105];
void deepc(){
	for(int x=0;x<r;x++){
		for(int y=0;y<s;y++){
			ploca[x][y]=mov[x][y];
			if(mov[x][y]=='X')ploca[x][y]='.';
		}
	}
}
bool moi(int n){
	memset(mov,'.',sizeof mov);
	posix+=sx[n],posiy+=sy[n];
	if(ploca[posix][posiy]=='.' || ploca[posix][posiy]=='X' || ploca[posix][posiy]=='I'){
		ans++;
		mov[posix][posiy]='I';
	}else{
		ans++;
		return false;
	}
	int nextx,nexty,px,py,m,p;
	for(int x=0;x<r;x++){
		for(int y=0;y<s;y++){
			if(ploca[x][y]=='R'){
				m=aBs(posix-x)+aBs(posiy-y);
				for(int c=0;c<9;c++){
					nextx=x+sx[c],nexty=y+sy[c];
					p=aBs(posix-nextx)+aBs(posiy-nexty);
					if(m>p){
						m=p;
						px=nextx,py=nexty;
					}
				}
				if(mov[px][py]!='X'){
					if(mov[px][py]=='R')mov[px][py]='X';
					else if(mov[px][py]=='I')return false;
					else mov[px][py]='R';
				}
			}
		}
	}
	deepc();
	return true;
}
void pprr(void){
	for(int x=0;x<r;x++){
		for(int y=0;y<s;y++){
			printf("%c",ploca[x][y]);
		}
		printf("\n");
	}
}
int main(){
	memset(mov,'.',sizeof mov);
	scanf("%d %d",&r,&s);
	for(int x=0;x<r;x++){
		scanf("%s",ploca[x]);
		for(int y=0;y<s;y++){
			if(ploca[x][y]=='I'){
				posix=x;
				posiy=y;
			}
		}
	}
	char n[500];
	scanf("%s",n);
	int gg=0;
	bool p=false;
	while(n[gg]!=0){
		if(moi(n[gg]-'0'-1)==false){
			p=true;
			break;
		}
		gg++;
	}
	if(p==false){
		pprr();
	}else{
		printf("kraj %d\n",ans);
	}
}
