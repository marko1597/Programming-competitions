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

bool prv=0;
llint a,b,s;
llint pw[50];
llint ans2=-1;
int dp[200][200];
llint rek(llint aa=0,llint n=15,llint ss=0){
	if(n==-1){
		if(aa>=a && aa<=b && ss==s){
			if(!prv){
				ans2=aa;
				prv=1;
			}
			return 1;
		}
		return 0;
	}
	if(aa>b)
		return 0;
	if(ss>s)
		return 0;
	if(aa>=a && aa<=b && dp[ss][n]!=-1)
		return dp[ss][n];
	llint ret=0;
	for(int x=0;x<10;x++){
		ret+=rek(aa+x*pw[n],n-1,ss+x);
	}
	if(aa>=a && aa<=b)
		dp[ss][n]=ret;
	return ret;
}
int main(){
	memset(dp,-1,sizeof dp);
	scanf("%d %d %d",&a,&b,&s);
	pw[0]=1;
	for(int x=1;x<=20;x++)
		pw[x]=pw[x-1]*10ll;
	printf("%lld\n",rek());
	printf("%lld\n",ans2);
}
