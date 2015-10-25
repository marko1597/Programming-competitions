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

int main(){
	int n,v,t,tp,ans=0;
	do{
		ans=0;
		scanf("%d",&n);
		if(n==-1)
			break;
		scanf("%d %d",&v,&t);
		ans+=v*t;
		tp=t;
		for(int x=0;x<n-1;x++){
			scanf("%d %d",&v,&t);
			ans+=v*(t-tp);
			tp=t;
		}
		printf("%d miles\n",ans);
	}while(1);
}
