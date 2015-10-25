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

llint mod=2006;
llint rek(llint a,llint b){
	if(b==0)
		return 1;
	llint tmp=rek(a,b/2);
	tmp%=mod;
	tmp*=tmp;
	tmp%=mod;
	if(b%2==0)
		return tmp;
	else 
		return (tmp*a)%mod;
}
int main(){
	llint a;
	while(1){
		scanf("%lld",&a);
		if(!a)break;
		printf("%d\n",rek(a%mod,a));
	}
}
