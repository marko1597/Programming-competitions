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

int abb(int n){
	if(n<0)return n*-1;
	return n;
}
int main(){
	int n,p,niz[400],b=0,ans=0;
	scanf("%d %d",&n,&p);
	for(int x=0;x<n;x++){
		scanf("%d",niz+x);
	}
	priority_queue<int>q;
	for(int x=0;x<n;x++){
		b=0;
		for(int y=0;y<n;y++){
			if(x==y)continue;
			b+=abb(niz[x]-niz[y]);
		}
		q.push(b*-1);
	}
	for(int x=0;x<p;x++){
		ans+=q.top()*-1;
		q.pop();
	}
	printf("%d\n",ans);
}
