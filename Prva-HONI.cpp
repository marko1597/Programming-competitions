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

char polje[200][200];
int main(){
	priority_queue<string,vector<string>,greater<string> >niz;
	int r,s;
	char rjec[100];
	memset(rjec,0,sizeof rjec);
	int p=0;
	scanf("%d %d",&r,&s);
	for(int x=0;x<r;x++)
		scanf("%s",polje[x]);
	for(int x=0;x<r;x++){
		for(int y=0;y<s;y++)
			if(polje[x][y]=='#'){
				if(p>=2)
					niz.push(rjec);
				memset(rjec,0,sizeof rjec);
				p=0;
			}else{
				rjec[p++]=polje[x][y];
			}
		if(p>=2)
			niz.push(rjec);
		memset(rjec,0,sizeof rjec);
		p=0;
	}
	for(int x=0;x<s;x++){
		for(int y=0;y<r;y++)
			if(polje[y][x]=='#'){
				if(p>=2)
					niz.push(rjec);
				memset(rjec,0,sizeof rjec);
				p=0;
			}else{
				rjec[p++]=polje[y][x];
			}
		if(p>=2)
			niz.push(rjec);
		memset(rjec,0,sizeof rjec);
		p=0;
	}
	printf("%s\n",niz.top().c_str());
}
