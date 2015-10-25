#include <cstdio>
#include <cstring>
#include <iostream>
#include <math.h>
#include <cmath>
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
typedef double lld;

llint niz[64];
int main(){
	memset(niz,0,sizeof niz);
	int n,p,pp=0;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		pp=0;
		scanf("%d",&p);
		while(p>0){
			niz[pp]+=p%2;
			pp++;
			p/=2;
		}
	}
	llint pot=1,ans=0;
	for(int x=0;x<63;x++){
		ans+=pot*niz[x]*(n-niz[x]);
		pot*=2ll;
	}
	printf("%llu\n",ans);
}
