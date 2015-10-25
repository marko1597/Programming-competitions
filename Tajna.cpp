#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	string tajna,dec;
	cin >> tajna;
	int maxx=1,maxy=tajna.size();
	for(int x=0;x<tajna.size();x++){
	    for(int y=x;y<tajna.size();y++){
			if((x+1)*(y+1)>tajna.size())break;
		    if((x+1)*(y+1)!=tajna.size())continue;
		    if(maxx<x+1)maxx=x+1,maxy=y+1;
		}
	}
	for(int y=0;y<maxx;y++){
 	    for(int x=y;x<maxx*maxy;x+=maxx){
		    dec+=tajna[x];
		}
	}
	printf("%s\n",dec.c_str());
}
