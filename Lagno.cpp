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

char ploca[8][15];
int sx[]={1,1,1,-1,-1,-1,0,0};
int sy[]={1,-1,0,1,-1,0,1,-1};
int ret[8][8];
int main(){
	int ans=0;
	memset(ret,0,sizeof ret);
	for(int x=0;x<8;x++){
		scanf("%s",ploca[x]);
	}
	for(int x=0;x<8;x++){
		for(int y=0;y<8;y++){
			if(ploca[x][y]=='B'){
				for(int cc=0;cc<8;cc++){
					if((x+sx[cc]>=0 && y+sy[cc]>=0 && x+sx[cc]<8 && y+sy[cc]<8) && ploca[x+sx[cc]][y+sy[cc]]=='W'){
						int br=0,xx=x+sx[cc],yy=y+sy[cc];
						while(ploca[xx][yy]=='W'){
							xx+=sx[cc];
							yy+=sy[cc];
							br++;
							if(!(x+sx[cc]>=0 && y+sy[cc]>=0 && x+sx[cc]<8 && y+sy[cc]<8)){br=0;break;}
						}
						if(ploca[xx][yy]=='.')ret[xx][yy]+=br;
					}
				}
			}
		}
	}
	for(int x=0;x<8;x++)
		for(int y=0;y<8;y++)
			ans=max(ans,ret[x][y]);
	printf("%d\n",ans);
}
