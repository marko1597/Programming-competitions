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

typedef long long llint;

bool prost(llint long long a){
	int kor, i;
	kor=(int)floor(sqrt(a))+1;
	if(a!=2){
		for(i=2;i<=kor;i++)
			if(a%i==0)
				return 0;
	}
	return 1;
}
int main(){
	llint p;
	int n;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%llu",&p);
		if(prost(p)==true)printf("NE\n");
		else printf("DA\n");
	}
}
