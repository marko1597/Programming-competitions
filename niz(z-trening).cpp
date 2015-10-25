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

int ret[19];
llint broj(){
	llint retu=0;
	for(int x=17;x>=0;x--)
		retu=retu*10+ret[x];
	return retu;
}
int zbc(llint n){
	int ret=0;
	while(n>0){
		ret+=n%10;
		n/=10;
	}
	return ret;
}
llint procm(int s){
	for(int x=0;x<18;x++)
		if(ret[x]<9 && s>0)
			if(9-ret[x]<=s)
				s-=9-ret[x],ret[x]=9;
			else
				ret[x]+=s,s=0;
	return broj();
}
void rac(){
	for(int x=0;x<18;x++)
		ret[x+1]+=ret[x]/10,ret[x]%=10;
}
int zbcr(){
	int retu=0;
	for(int x=0;x<18;x++)
		retu+=ret[x];
	return retu;
}
llint procv(int s){
	for(int x=0;x<18;x++){
		if(ret[x]>0)
			if(-s+zbcr()>0){
				ret[x]=0;
				ret[x+1]++;
				rac();
			}else if(-s+zbcr()<0){
				rac();
				procm(s-zbcr());
			}else
				break;
	}
	return broj();
}
int ne(int s,llint n){
	int x=0,s1=zbc(n);
	while(n>0){
		ret[x]=n%10;
		n/=10;
		x++;
	}
	if(s1<s)
		return procm(s-s1);
	else if(s1>s)
		return procv(s);
	else
		return broj();
}
int main(){
    int n;
	llint a;
	scanf("%lld %d",&a,&n);
	n--;
	for(int x=0;x<n;x++)
		a=ne(zbc(a*4),a+1);
	printf("%lld\n",a);
}
