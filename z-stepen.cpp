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

typedef long long llint;

llint c;
llint stepen(llint a,llint b){
	if(b==0)
		return 1;
	llint tmp=stepen(a,b/2);
	tmp*=tmp;
	tmp%=c;
	if(b%2==0){
		return tmp%c;
	}
	return (tmp*a)%c;
}
int main(){
	llint a,b;
	scanf("%lld %lld %lld",&a,&b,&c);
	printf("%lld",stepen(a%c,b));
}
