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

const int m=70000;
int fw[m];
void ins(int a,int b){
	for(int x=a;x<m;x+=x&-x)
		fw[x]+=b;
}
int gt(int a){
	int ret=0;
	for(int x=a;x>0;x-=x&-x)
		ret+=fw[x];
	return ret;
}
int bs(int num=0,int lo=0,int hi=m+1){
	int mid,t,t1;
	t=t1=0;
	while(lo<=hi){
		mid=(hi+lo)/2;
		t=gt(mid+2);
		t1=gt(mid+1);
		if(t1<num && t>=num)
			return mid+1;
		else if(t<num)
			lo=mid+1;
		else if(t>=num)
			hi=mid-1;
	}
	return 0;
}
int main(){
	memset(fw,0,sizeof fw);
	int n,a,b;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d %d",&a,&b);
		if(a==1)
			ins(b+1,1);
		else
			printf("%d\n",bs(b));
	}
}
