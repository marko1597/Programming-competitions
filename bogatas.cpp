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

typedef long long llint;

bool niz[201][201];
short matrx[201][201];
int main(){
	int n,m,a,b,ans=0;
	memset(matrx,0,sizeof matrx);
	scanf("%d %d",&n,&m);
	for(int x=0;x<m;x++){
		scanf("%d %d",&a,&b);
		niz[a-1][b-1]=true;
	}
	int tren;
	for(int x=1;x<=n;x++){
		tren=0;
		for(int y=1;y<=n;y++){
			if(niz[x-1][y-1]==true)tren++;
			matrx[x][y]=matrx[x-1][y]+tren;
		}
	}
	for(int s=0;s<n;s++){
		for(int x=1;x<=n;x++){
			if(x+s>n)break;
			for(int y=1;y<=n;y++){
				if(y+s>n)break;
				if(matrx[x+s][y+s]-matrx[x-1][y+s]-matrx[x+s][y-1]+matrx[x-1][y-1]==0)ans=max(ans,s+1);
			}
		}
	}
	printf("%d\n",ans);
}
