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

const int M=4010;
int niz1[M],niz2[M],niz3[M],niz4[M],n;
int val1[M*M],val2[M*M];
int main(){
	llint ans=0;
	scanf("%d",&n);
	for(int x=0;x<n;x++)
		scanf("%d %d %d %d",niz1+x,niz2+x,niz3+x,niz4+x);
	int p1=0,p2=0;
	for(int x=0;x<n;x++)
		for(int y=0;y<n;y++)
			val1[p1++]=niz1[x]+niz2[y];
	sort(val1,val1+p1);
	for(int x=0;x<n;x++)
		for(int y=0;y<n;y++)
			val2[p2++]=-niz3[x]-niz4[y];
	sort(val2,val2+p2);
	for(int i=0;i<p1;){
		llint A=upper_bound(val1,val1+p1,val1[i])-lower_bound(val1,val1+p1,val1[i]);
		llint B=upper_bound(val2,val2+p2,val1[i])-lower_bound(val2,val2+p2,val1[i]);
		ans+=A*B;
		i+=A;
	}
	printf("%lld\n",ans);
}
