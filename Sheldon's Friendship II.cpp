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

int main(){
	char in[10];
	int n,ans = 0,f = 0;
	while(!feof(stdin)){
		scanf("%s",in);
		if( in[0] == 'n' ){
			scanf("%lld", &n);
			ans = max( ans, n );
			if( n < 0 )n = -n;
			f++;
		}else
            f--;
        if( !f )
            ans = 0;
	}
	printf("%lld\n",ans*ans);
}
