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

int dp[45];
int main(){
	dp[0]=1;
	dp[1]=2;
	for(int x=2;x<40;x++)
		dp[x]=dp[x-2]+dp[x-1];
	int n,br,ans;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		ans=0;
		scanf("%d",&br);
		for(int y=39;y>=0 && br>0;y--){
			if(dp[y]<=br){
				br-=dp[y];
				ans+=dp[y-1];
			}
		}
		printf("%d\n",ans);
	}
}
