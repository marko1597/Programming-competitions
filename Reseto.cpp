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
	int n,k;
	bool prime[1001];
	memset(prime,0,sizeof prime);
	scanf("%d %d",&n,&k);
	for(int x=2;x<=n;x++){
		for(int y=1;y*x<=n;y++){
			if(prime[x*y]==false)k--;
			prime[x*y]=true;
			if(k==0){
				printf("%d\n",x*y);
				break;
			}
		}
		if(k==0)break;
	}
}
