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

double abb(double n){
	if(n<0)return n*-1;
	return n;
}
int main(){
	int n,ans=0;
	double xx,yy,m,b;
	scanf("%lf %lf %d",&m,&b,&n);
	for(int x=0;x<n;x++){
		scanf("%lf %lf",&xx,&yy);
		if(xx>=0 && abb(m*xx+b-yy)<=0.0005)ans++;
	}
	printf("%d\n",ans);
}
