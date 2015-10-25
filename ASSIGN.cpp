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

typedef long long llint;

int matrx[21][21];
int n;
llint mem[1<<20];
llint rek(int k,int bio){
	if(mem[bio]!=-1)
		return mem[bio];
	if(k==n)
		return 1;
	llint ret=0;
	for(int x=0;x<n;x++)
		if(matrx[k][x] && !(bio&(1<<x))){
			ret+=rek(k+1,bio+(1<<x));
		}
	mem[bio]=ret;
	return ret;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		memset(mem,-1,sizeof mem);
		scanf("%d",&n);
		for(int x=0;x<n;x++)
			for(int y=0;y<n;y++)
				scanf("%d",&matrx[x][y]);
		printf("%lld\n",rek(0,0));
	}
}
