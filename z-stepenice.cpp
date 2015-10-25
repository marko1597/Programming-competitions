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

typedef long long llint;
int mmo=1021987;
int nn,k;
int mem[102000];
llint rek(int n=0){
	if(n>nn)return 0;
	if(mem[n]!=-1)return mem[n];
	if(n==nn){
		mem[n]=1;
		return 1;
	}
	int ans=0;
	for(int x=1;x<=k;x++){
		ans+=rek(n+x);
		ans%=mmo;
	}
	return mem[n]=ans;
}
int main(){
	int ans;
	memset(mem,-1,sizeof mem);
	scanf("%d %d",&nn,&k);
	ans=rek();
	printf("%d\n",ans);
}
