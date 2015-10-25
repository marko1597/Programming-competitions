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

typedef unsigned long long llint;
llint f(llint a,llint b){
	if(a==0)return 0;
	if(b==0)return 1;
	return a*f(a,b-1);
}
int main(){
	int n,k;
	llint ans=0;
	scanf("%d %d",&n,&k);
	ans=f(k,n/2)*f(k-1,n/2+(n%2==1));
	printf("%d\n",ans);
}
