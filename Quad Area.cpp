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

double abb(long double n){
	if(n<0)return n*-1.0;
	return n;
}
int main(){
	int t;
	scanf("%d",&t);
	for(int tt=0;tt<t;tt++){
		double ans=0;
		double a,b,c,d,s,p;
		scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
		s=(a+b+c+d)/2.0;
		ans=sqrt(abb((s-a)*(s-b)*(s-c)*(s-d)));
		printf("%.2lf\n",ans);
	}
}
