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

int main(){
	int rje[50500];
	memset(rje,999999,sizeof rje);
	int niz[50500],n,k;
	scanf("%d %d",&n,&k);
	for(int x=0;x<n;x++){
		scanf("%d",niz+x);
	}
	sort(niz,niz+n);
	rje[0]=0;
	for(int x=1;x<=k;x++){
		for(int y=0;y<n;y++){
			if(!(niz[y]<=x))break;
			rje[x]=min(rje[x],rje[x-niz[y]]+1);
		}
	}
	if(rje[k]>=100000)printf("-1\n");
	else printf("%d\n",rje[k]);
}
