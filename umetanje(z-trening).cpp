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

llint niz[10],p=0,k,ans=0,tr,br,d=999999999;
bool pl[10];
llint abss(llint n){
	if(n<0)
		return -n;
	return n;
}
void rek(int t=0){
	if(t==p-1){
		tr=br=0;
		tr+=niz[p-1];
		for(int x=p-2;x>=0;x--){
			if(pl[x])
				br+=tr,tr=niz[x];
			else
				tr=tr*10+niz[x];
		}
		if(tr)
			br+=tr;
		if(abss(br-k)<d)
			d=abss(br-k),ans=br;
		return;
	}
	pl[t]=0;
	rek(t+1);
	pl[t]=1;
	rek(t+1);
}
int main(){
	llint n;
	scanf("%lld %lld",&n,&k);
	while(n>0){
		niz[p++]=n%10;
		n/=10;
	}
	rek();
	printf("%d\n",ans);
}
