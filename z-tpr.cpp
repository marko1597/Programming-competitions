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

bool prost(int n){
	float mm;
	mm=sqrt(float(n));
	int a=mm+1;
	if(n==2)return true;
	else if(n%2==0)return false;
	for(int x=3;x<a;x+=2){
		if(n%x==0)return false;
	}
	return true;
}
int niz[5000];
struct dinn{
	int size;
	void add(int n){
		niz[size]=n;
		size++;
	}
};
int a,b,m,d,s;
int main(){
	dinn prosti;
	int ans=0;
	bool nizr[2000];
	memset(nizr,0,sizeof nizr);
	prosti.size=0;
	scanf("%d %d %d %d",&a,&b,&m,&d);
	for(int x=2;x<=b;x++){
		if(x%m==d && prost(x)==true)prosti.add(x);
	}
	s=prosti.size;
	int zz;
	for(int x=0;x<s;x++){
		for(int y=0;y<s;y++){
			for(int z=0;z<s;z++){
				zz=niz[x]+niz[y]+niz[z];
				if(zz>=a && zz<=b)nizr[zz]=true;
			}
		}
	}
	for(int x=0;x<2000;x++){
		if(nizr[x]==true)ans++;
	}
	printf("%d\n",ans);
}
