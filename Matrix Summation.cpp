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

int MAX=1050;
int matrx[1050][1050];

void ubaci(int mjestox,int mjestoy,int broj){
	for(int x=mjestox;x<MAX;x+=x&-x)
		for(int y=mjestoy;y<MAX;y+=y&-y)
			matrx[x][y]+=broj;
}
int upit(int mjestox,int mjestoy){
	int ret=0,retx=0;
	for(int y=mjestoy;y>0;y-=y&-y){
		retx=0;
		for(int x=mjestox;x>0;x-=x&-x)
			retx+=matrx[x][y];
		ret+=retx;
	}
	return ret;
}
int sum(int x1,int y1,int x2,int y2){
	return upit(x2,y2)+upit(x1-1,y1-1)-upit(x1-1,y2)-upit(x2,y1-1);
}
int main(){
	int t,a,b,c,d,v,n;
	char str[20];
	scanf("%d",&t);
	while(t--){
		memset(matrx,0,sizeof matrx);
		scanf("%d",&n);
		MAX=n+26;
		while(1){
			scanf("%s",str);
			if(!strcmp(str,"SET")){
				scanf("%d %d %d",&a,&b,&v);
				a++,b++;
				v-=sum(a,b,a,b);
				ubaci(a,b,v);
			}else if(!strcmp(str,"SUM")){
				scanf("%d %d %d %d",&a,&b,&c,&d);
				a++,b++,c++,d++;
				printf("%d\n",sum(a,b,c,d));
			}else if(!strcmp(str,"END"))
				break;
		}
	}
}
