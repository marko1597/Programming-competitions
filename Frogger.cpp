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

double dist[250][250];
int cx[250],cy[250];
int inf=0x3f3f3f3f;
double dis[250];
double ans=0;
int main(){
	int n,test=0;
	while(1){
		test++;
		ans=0;
		scanf("%d",&n);
		if(!n)break;
		for(int x=0;x<n;x++)
			dis[x]=inf;
		for(int x=0;x<n;x++){
			scanf("%d %d",cx+x,cy+x);
		}
		double a,b;
		for(int x=0;x<n;x++){
			for(int y=0;y<n;y++){
				if(y==x)continue;
				a=abs(cx[x]-cx[y]);
				b=abs(cy[x]-cy[y]);
				dist[x][y]=sqrt(a*a+b*b);
			}
		}
		dis[0]=0;
		vector<bool>bio(n,0);
		int cvor;
		double udaljenost;
		for(int x=0;x<n-1;x++){
			udaljenost=inf+1;
			for(int y=0;y<n;y++){
				if(dis[y]<udaljenost && !bio[y]){
					udaljenost=dis[y];
					cvor=y;
				}
			}
			bio[cvor]=1;
			int tr=cvor;
			for(int y=0;y<n;y++){
				if(cvor!=y && dis[y]>udaljenost+dist[cvor][y])
					dis[y]=udaljenost+dist[cvor][y],tr=y;
			}
			ans=max(ans,dist[tr][cvor]);
		}
		printf("Scenario #%d\nFrog Distance = %.3lf\n\n",test,ans);
	}
}
