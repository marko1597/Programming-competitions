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

int main(){
	long long i,j,ans,m=0,n;
	while(feof(stdin)==false){
		m=0;
		scanf("%lld %lld",&i,&j);
		for(int x=i;x<=j;x++){
			n=x;
			ans=0;
			while(n!=1){
				ans++;
				if(n%2==1)n=3*n+1;
				else n/=2;
			}
			ans++;
			m=max(m,ans);
		}
		printf("%lld %lld %lld\n",i,j,m);
	}
}
