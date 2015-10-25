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

const int M=1000;
int X[M],Y[M],D[M],ans=1;
int abss(int n){
	if(n<0)
		return -n;
	return n;
}
int dist(int x1,int y1,int x2,int y2){
	return abss(x1-x2)+abss(y1-y2);
}
int main(){
	int n,tp,m;
	scanf("%d %d",&m,&n);
	for(int x=0;x<n;x++)
		scanf("%d %d %d",X+x,Y+x,D+x);
	for(int x=0;x<n;x++){
		tp=0;
		for(int y=0;y<n;y++)
			if(dist(X[x],Y[x],X[y],Y[y])<=D[x]+D[y])
				tp++;
		ans=max(ans,tp);
	}
	printf("%d\n",ans);
}
