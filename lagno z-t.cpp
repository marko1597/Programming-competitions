#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;


int main(){
	const int smjerovi[2][8]={{ -1, -1, 0, 1, 1, 1, 0, -1 },
							  { 0, 1, 1, 1, 0, -1, -1, -1 }};
	char ploca[10][10];
	int virploca[8][8]={
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0}};
	for(int y=1;y<9;y++){
	   for(int x=1;x<10;x++){
           scanf("%c",&ploca[y][x]);
       } 
	}
	int trenb=0;
	for(int x=1;x<=8;x++){
	    for(int y=1;y<=8;y++){
		    if(ploca[x][y]=='B'){
				for(int sx=0;sx<8;sx++){
					if(ploca[x+smjerovi[1][sx]][y+smjerovi[0][sx]]=='W'){
						for(int put=1;put<8;put++){
							if(ploca[x+smjerovi[1][sx]*put][y+smjerovi[0][sx]*put]=='W'){
								trenb+=1;
							}
							if(ploca[x+smjerovi[1][sx]*put][y+smjerovi[0][sx]*put]=='.'){
								virploca[x-1+smjerovi[1][sx]*put][y-1+smjerovi[0][sx]*put]+=trenb;
								trenb=0;
								break;
							}
							if(ploca[x+smjerovi[1][sx]*put][y+smjerovi[0][sx]*put]=='B'){
								trenb=0;
								break;
							}
							if(put==7){
								trenb=0;
								break;
							}
						}
					}
				}
			}
		}
	}
	int rjesenje=0;
	for(int x=0;x<8;x++){
	    for(int y=0;y<8;y++){
			if(rjesenje<virploca[x][y]){
				rjesenje=virploca[x][y];
			}	
		}
	}
	printf("%d\n",rjesenje);
	//system("pause");
}
