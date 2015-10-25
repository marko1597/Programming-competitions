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

typedef long double lld;

lld polje[500][501],zb,rz,d,dn[500];
int main(){
	int n;
	scanf("%d",&n);
	for(int x=0;x<n;x++)
		for(int y=0;y<=n;y++)
			scanf("%Llf",&polje[x][y]);
	for(int x=0;x<n;x++){
		zb=1,rz=1;
		for(int y=0;y<n;y++){
			zb*=polje[y][(y+x)%n];
			rz*=polje[n-1-y][(y+x)%n];
		}
		d+=zb-rz;
	}
	for(int z=0;z<n;z++)
		for(int x=0;x<n;x++){
			zb=1,rz=1;
			for(int y=0;y<n;y++){
				if((y+x)%n==z){
					zb*=polje[y][n];
					rz*=polje[n-1-y][n];
				}else{
					zb*=polje[y][(y+x)%n];
					rz*=polje[n-1-y][(y+x)%n];
				}
			}
			dn[z]+=zb-rz;
		}
	for(int x=0;x<n;x++)
		printf("x%d=%Llf\n",x+1,dn[x]/d);
}
