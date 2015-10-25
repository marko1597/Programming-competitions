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

const int maxp=1299709;
int main(){
	vector<int>value(maxp+2,0),pr(maxp+2),ne(maxp+2);
	vector<int>prost;
	for(int x=2;x<=maxp;x++)
		pr[x]=x-1,ne[x]=x+1;
	for(int x=2;x*x<=maxp;x=ne[x])
		for(int y=pr[maxp/x+1];y>=x;y=pr[y]){
			value[x*y]=x;
			ne[pr[x*y]]=ne[x*y];
			pr[ne[x*y]]=pr[x*y];
		}
	for(int x=2;x<=maxp;x++)
		if(!value[x])
			prost.push_back(x);
	int br=0,a,b;
	while(1){
		scanf("%d",&br);
		if(br==0)break;
		a=lower_bound(prost.begin(),prost.end(),br)-prost.begin();
		if(prost[a]==br)
			printf("0\n");
		else{
			b=a-1;
			printf("%d\n",prost[a]-prost[b]);
		}
	}
}
