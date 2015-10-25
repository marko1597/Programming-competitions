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

int main(){
	int n,m,br,p1=0,p2=0,ans=0;
	int nizn[10000],nizp[10000];
	stack<int>cjev;
	scanf("%d",&n);
	scanf("%d",&m);
	for(int x=0;x<m;x++){
		scanf("%d",&br);
		if(br>=0){
			nizp[p1++]=br;
		}else{
			nizn[p2++]=br*-1;
		}
	}
	sort(nizp,nizp+p1);
	sort(nizn,nizn+p2);
	for(int x=0;x<p1;x++){
		cjev.push(nizp[x]);
	}
	while(!cjev.empty()){
		ans+=cjev.top()*2;
		for(int x=0;x<n && !cjev.empty();x++){
			cjev.pop();
		}
	}
	for(int x=0;x<p2;x++){
		cjev.push(nizn[x]);
	}
	while(!cjev.empty()){
		ans+=cjev.top()*2;
		for(int x=0;x<n && !cjev.empty();x++){
			cjev.pop();
		}
	}
	printf("%d\n",ans);
}
