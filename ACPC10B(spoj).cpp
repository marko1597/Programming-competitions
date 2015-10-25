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

set<int>qq1,qq2;
int znam(int n){
	int ret=0,z;
	while(n>0){
		z=n%10;
		ret+=z*z;
		n/=10;
	}
	return ret;
}
struct qu{
	int niz[500],poc,kraj;
	qu(){
		poc=kraj=0;
	}
	void push(int x){
		niz[kraj++]=x;
	}
	bool empty(){
		return poc==kraj;
	}
	void clear(){
		poc=kraj=0;
	}
}q1,q2;
int main(){
	int a,b,ans,aa,bb;
	while(1){
		ans=999999999;
		qq1.clear();
		qq2.clear();
		q1.clear();
		q2.clear();
		scanf("%d %d",&a,&b);
		aa=a,bb=b;
		if(a==0 && b==0)
			break;
		while(qq1.find(a)==qq1.end()){
			q1.push(a);
			qq1.insert(a);
			if(a==1)
				break;
			a=znam(a);
		}
		while(qq2.find(b)==qq2.end()){
			q2.push(b);
			qq2.insert(b);
			if(b==1)
				break;
			b=znam(b);
		}
		for(int x=0;x<q1.kraj;x++)
			for(int y=0;y<q2.kraj;y++)
				if(q1.niz[x]==q2.niz[y])
					ans=min(ans,x+y+2);
		if(ans==999999999)
			printf("%d %d 0\n",aa,bb);
		else
			printf("%d %d %d\n",aa,bb,ans);
	}
}
