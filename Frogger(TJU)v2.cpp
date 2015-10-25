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
double ans=0;
int main(){
	int n,test=0;
	while(1){
		test++;
		ans=0;
		scanf("%d",&n);
		if(!n)break;
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
		if(n==2)
			printf("Scenario #%d\nFrog Distance = %.3lf\n\n",test,dist[0][1]);
		else{
			for(int x=1;x<n;x++)
				for(int y=1;y<n;y++)
						ans=max(ans,dist[x][y]);
			printf("Scenario #%d\nFrog Distance = %.3lf\n\n",test,ans);
		}
	}
}
