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
	int n;
	long long ans=0;
	char znak[100005];
	int niz[100006];
	scanf("%d",&n);
	scanf("%s",znak);
	for(int x=0;x<n+1;x++){
		scanf("%d",niz+x);
	}
	sort(niz,niz+n+1,greater<int>());
	ans+=niz[0];
	int start=1,end=n;
	int x=0;
	while(start<=end){
		if(znak[x]=='+'){
			ans+=niz[start];
			start++;
		}else{
			ans-=niz[end];
			end--;
		}
		x++;
	}
	printf("%lld\n",ans);
}
