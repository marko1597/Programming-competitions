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
typedef long double lld;
int n,m,k;
vector<int>blok,niz;
int rek(int j,int a){
	a--;
	int ret=0,star=a/k,br=0;
	for(int x=0;x<j;x++){
		if(star!=(a+x)/k){
			if(br==k){
				blok[star]++;
				ret+=blok[star];
			}else{
				for(int c=1;c<=br;c++){
					niz[x+a-c]++;
					ret+=niz[x+a-c];
				}
			}
			br=0;
			star=(a+x)/k;
		}
		br++;
	}
	if(br==k || br==n-((a+j)/k)*k){
		blok[star]++;
		ret+=blok[star];
	}else{
		for(int c=1;c<=br;c++){
			niz[j+a-c]++;
			ret+=niz[j+a-c];
		}
	}
	return ret;
}
int main(){
	int j,a,c;
	scanf("%d %d",&n,&m);
	k=sqrt(float(n));
	if(n/float(k)!=n/k){
		c=n/k+1;
	}else{
		c=n/k;
	}
	blok.assign(c,0);
	niz.assign(n,0);
	for(int x=0;x<m;x++){
		scanf("%d %d",&j,&a);
		printf("%d\n",rek(j,a));
	}
}
