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

const int MAX=200000;
struct qu{
	int niz[200000],q[200000];
	int poc1,poc2,kraj1,kraj2;
	qu(){
		poc1=poc2=kraj1=kraj2=0;
		memset(niz,0,sizeof niz);
		memset(q,0,sizeof q);
	}
	bool empty(){
		return poc1==kraj1;
	}
	bool emptym(){
		return poc2==kraj2;
	}
	void push(int x){
		niz[kraj1++]=x;
		pushm(x);
	}
	void pop(){
		popm(front());
		poc1++;
	}
	int front(){
		return niz[poc1];
	}
	void popm(int x){
		if(q[poc2] == x)poc2++;
	}
	void pushm(int x){
		while(!emptym() && q[kraj2-1] > x)kraj2--;
		q[kraj2++]=x;
	}
	int getmin(){
		return q[poc2];
	}
}q;
int main(){
	int n,d,t,ans=0;
	scanf("%d %d",&n,&d);
	for(int x=0;x<d;x++){
		scanf("%d",&t);
		q.push(t);
		ans+=q.getmin();
	}
	for(int x=0;x<n-d;x++){
		scanf("%d",&t);
		q.pop();
		q.push(t);
		ans+=q.getmin();
	}
	printf("%d\n",ans);
}
