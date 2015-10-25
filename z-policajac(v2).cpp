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

int s[10000];
int e[10000];
int main(){
	int n,ans=0,pre=1,p;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d %d",&s[x],&e[x]);
	}
	sort(s,s+n);
	sort(e,e+n);
	p=0;
	int ss=s[0];
	pre=1;
	for(int x=1;x<n;x++){
		while(e[p]<s[x]){
			pre--;
			p++;
		}
		pre++;
		ans=max(ans,pre);
	}
	printf("%d\n",ans);
}
