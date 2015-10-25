#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
bool pron=0;
int by=0,bx=0,stavio=0,px=0,py=0,posx=0,posy=0,mp=0;
char fali;
char ploca[25+2][25+2];
int voz(int y,int x){
	if(pron==1) return 1;
	if(ploca[y][x]=='M'){
		if(mp!=0) return 0;
		mp=1;
		for(int x1=0,c1=1;x1<2;x1++,c1*=-1){
			if(ploca[y+c1][x]!=0){
				by=c1,bx=0;
				px=x,py=y;
				voz(y+c1,x);
				by=0,bx=0;
			}
		}
		for(int x1=0,c1=1;x1<2;x1++,c1*=-1){
			if(ploca[y][x+c1]!=0){
				bx=c1,by=0;
				voz(y,x+c1);
				bx=0,by=0;
			}
		}
	}
 	if(ploca[y][x]=='-'){
		by=y-py,bx=x-px;
		if((x-px==1 || x-px==-1) && y-py==0){
			px=x,py=y;
			voz(y+by,x+bx);
			px=x-bx,py=y-by;
		}	
		return 0;
	}
	if(ploca[y][x]=='|'){
		by=y-py,bx=x-px;
		if((y-py==1 || y-py==-1) && x-px==0){
			px=x,py=y;
			voz(y+by,x+bx);
			px=x-bx,py=y-by;
		}	
		return 0;
	}
	if(ploca[y][x]=='+'){
		by=y-py,bx=x-px;
		px=x,py=y;
		voz(y+by,x+bx);
		px=x-bx,py=y-by;
		return 0;
	}
	if(ploca[y][x]=='1'){
		by=y-py,bx=x-px;
		if(bx==-1 && by==0){
			px=x,py=y;
			voz(y-bx,x+by);
			px=x-bx,py=y-by;
		}
		if(by==-1 && bx==0){
			px=x,py=y;
			voz(y+bx,x-by);
			px=x-bx,py=y-by;
		}
		return 0;
	}
	if(ploca[y][x]=='2'){
		by=y-py,bx=x-px;
		if(bx==-1 && by==0){
			px=x,py=y;
			voz(y+bx,x+by);
			px=x-bx,py=y-by;
		}
		if(by==1 && bx==0){
			px=x,py=y;
			voz(y+bx,x+by);
			px=x-bx,py=y-by;
		}
		return 0;
	}
	if(ploca[y][x]=='3'){
		by=y-py,bx=x-px;
		if(bx==1 && by==0){
			px=x,py=y;
			voz(y-bx,x+by);
			px=x-bx,py=y-by;
		}
		if(by==1 && bx==0){
			px=x,py=y;
			voz(y+bx,x-by);
			px=x-bx,py=y-by;
		}
		return 0;
	}
	if(ploca[y][x]=='4'){
		by=y-py,bx=x-px;
		if(by==-1 && bx==0){
			px=x,py=y;
			voz(y+bx,x+by);
			px=x-bx,py=y-by;
		}
		if(bx==1 && by==0){
			px=x,py=y;
			voz(y+bx,x+by);
			px=x-bx,py=y-by;
		}
		return 0;
	}
	if(ploca[y][x]=='.'){
		if(stavio==0){
			stavio =1;
			posx=x,posy=y;
			fali='-';
			by=y-py,bx=x-px;
			if(pron==1) return 0;
			if((x-px==1 || x-px==-1) && y-py==0){
				px=x,py=y;
				ploca[y][x]=fali;
				voz(y+by,x+bx);
				ploca[y][x]='.';
				px=x-bx,py=y-by;
			}	
			if(pron==1) return 0;
			fali='|';
			by=y-py,bx=x-px;
			if((y-py==1 || y-py==-1) && x-px==0){
				px=x,py=y;
				ploca[y][x]=fali;
				voz(y+by,x+bx);
				ploca[y][x]='.';
				px=x-bx,py=y-by;
			}	
			if(pron==1) return 0;
			fali='1';
			by=y-py,bx=x-px;
			if(bx==-1 && by==0){
				px=x,py=y;
				ploca[y][x]=fali;
				voz(y-bx,x+by);
				ploca[y][x]='.';
				px=x-bx,py=y-by;
			}
			if(by==-1 && bx==0){
				px=x,py=y;
				ploca[y][x]=fali;
				voz(y+bx,x-by);
				ploca[y][x]='.';
				px=x-bx,py=y-by;
			}
			if(pron==1) return 0;
			fali='2';
			by=y-py,bx=x-px;
			if(bx==-1 && by==0){
				px=x,py=y;
				ploca[y][x]=fali;
				voz(y+bx,x+by);
				ploca[y][x]='.';
				px=x-bx,py=y-by;
			}
			if(by==1 && bx==0){
				px=x,py=y;
				ploca[y][x]=fali;
				voz(y+bx,x+by);
				ploca[y][x]='.';
				px=x-bx,py=y-by;
			}
			if(pron==1) return 0;
			fali='3';
			by=y-py,bx=x-px;
			if(bx==1 && by==0){
				px=x,py=y;
				ploca[y][x]=fali;
				voz(y-bx,x+by);
				ploca[y][x]='.';
				px=x-bx,py=y-by;
			}
			if(by==1 && bx==0){
				px=x,py=y;
				ploca[y][x]=fali;
				voz(y+bx,x-by);
				ploca[y][x]='.';
				px=x-bx,py=y-by;
			}
			if(pron==1) return 0;
			fali='4';
			by=y-py,bx=x-px;
			if(by==-1 && bx==0){
				px=x,py=y;
				ploca[y][x]=fali;
				voz(y+bx,x+by);
				ploca[y][x]='.';
				px=x-bx,py=y-by;
			}
			if(bx==1 && by==0){
				px=x,py=y;
				ploca[y][x]=fali;
				voz(y+bx,x+by);
				ploca[y][x]='.';
				px=x-bx,py=y-by;
			}
			if(pron==1) return 0;
			fali='+';
			by=y-py,bx=x-px;
			px=x,py=y;
			ploca[y][x]=fali;
			voz(y+by,x+bx);
			ploca[y][x]='.';
			px=x-bx,py=y-by;
			stavio=0;
		}else{
			return 0;
		}
	}
	if(ploca[y][x]=='Z'){
		printf("%d %d %c",posy,posx,fali);
		pron=1;
	}
	return 0;
}
int main(){
	int y,x;
	int sy,sx;
	scanf("%d %d",&y,&x);
	for(int y1=0;y1<y;y1++){
		for(int x1=0;x1<x;x1++){
			scanf("%c",&ploca[y1+1][x1+1]);
			if(ploca[y1+1][x1+1]!='-' && ploca[y1+1][x1+1]!='+' && ploca[y1+1][x1+1]!='|' && ploca[y1+1][x1+1]!='1' && ploca[y1+1][x1+1]!='2' && ploca[y1+1][x1+1]!='3' && ploca[y1+1][x1+1]!='4' && ploca[y1+1][x1+1]!='.' && ploca[y1+1][x1+1]!='M' && ploca[y1+1][x1+1]!='Z'){
				x1-=1;
				ploca[y1+1][x1+1]=0;
			}
			if(ploca[y1+1][x1+1]=='M'){
				sy=y1+1;
				sx=x1+1;
			}
		}
	}
	voz(sy,sx);
}
