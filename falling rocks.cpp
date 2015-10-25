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

typedef double lld;

lld aBs(lld n){
	if(n<0)return n*-1;
	return n;
}
int main(){
	int n;
	lld a,h,v;
	scanf("%d %lf",&n,&a);
	for(int x=0;x<n;x++){
		scanf("%lf %lf",&v,&h);
		v=aBs(v);
		printf("%.4lf\n",sqrt(v*v+2*a*h));
	}
}
