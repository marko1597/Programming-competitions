#include <cstdio>
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

const int M=100;
const double inf=1e300;
int X[M],Y[M];
map<pair<double,double>,int>ans;
pair<double,double> direction(int x,int y){
	double a=Y[y]-Y[x],b=X[y]-X[x];
	if(b==0.0)
		return make_pair(0.0,float(1.0*X[y]));
	return make_pair(a/b,float(1.0*Y[x]-1.0*X[x]*a/b));
}
int main(){
	int n;
	scanf("%d",&n);
	for(int x=0;x<n;x++)
		scanf("%d %d",X+x,+Y+x);
	for(int x=0;x<n;x++)
		for(int y=x+1;y<n;y++)
			ans[direction(x,y)]++;
	printf("%d\n",ans.size());
}
