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

llint a[100005],f[100005];
llint r,l,b;
llint s(llint x,llint y){
	return f[y]-f[x]-x*(a[y]-a[x]);
}
bool chck(int p){
	int po,ans;
	for(int x=0;x<r-p+1;x++){
		ans=0;
		po=(2*x+p-1)/2;
		ans+=s(x,po);
		ans+=s(po,x+p-1);
		if(ans<=b)
			return 1;
	}
	return 0;
}
int main(){
	scanf("%lld %lld %lld",&r,&l,&b);
	f[0]=0;
	llint zbroj=0,ans=0;
	for(int x=0;x<r;x++){
		scanf("%d",a+x);
		zbroj+=a[x];
		f[x]=zbroj;
	}
	int hi=r,lo=0,mid;
	while(lo<hi){
		mid=(lo+hi)/2;
		if(chck(mid))
			lo=mid,ans=mid;
		else
			hi=mid-1;
	}
	printf("%d\n",ans);
}
