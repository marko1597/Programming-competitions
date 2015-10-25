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

int brd=0,ans=0,n;
int prime[]={2,3,5,7,11,13,17,19,23};
llint pw[9][32];
bool rek(int p=0,llint t=1,int d=1){
	if(t>n)
		return 1;
	if(t<=n)
		if(d>brd)
			brd=d,ans=t;
		else if(d==brd && ans>t)
			ans=t;
	if(p>8)
		return 0;
	for(int x=0;x<=31;x++)
		if(rek(p+1,t*pw[p][x],d*(1+x)))
			break;
	return 0;
}
int main(){
	scanf("%d",&n);
	for(int x=0;x<9;x++){
		pw[x][0]=1;
		for(int y=1;y<32;y++)
			pw[x][y]=pw[x][y-1]*prime[x];
	}
	rek();
	printf("%d\n%d\n",ans,brd);
}
