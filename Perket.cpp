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
struct sas{
	int k,g;
};
sas niz[10];
int abb(int n){
	if(n<0)return n*-1;
	return n;
}
llint rek(int n,llint g,llint l){
	if(n==-1){
		if(g==1 && l==0)return 99999999999;
		return abb(g-l);
	}
	return min(rek(n-1,g,l),rek(n-1,g*niz[n].k,l+niz[n].g));
}
int main(){
	int n,ans;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d %d",&niz[x].k,&niz[x].g);
	}
	ans=rek(n-1,1,0);
	printf("%d\n",ans);
}
