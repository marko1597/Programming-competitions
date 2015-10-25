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

int main(){
	int n,t,v;
	llint ans=0,dod=0;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d %d",&t,&v);
		if(dod<=v)v-=dod,dod=0;
		else dod-=v,v=0;
		ans+=v;
		dod+=t;
	}
	printf("%lld\n",ans);
}
