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

map<int,int> ans;
void rek(int n){
	float M;
	int mm;
	M=sqrt(float(n))+1;
	mm=int(M);
	if(n%2==0){
		ans[2]+=1;
		return rek(n/2);
	}
	for(int x=3;x<=mm;x+=2){
		if(n%x==0){
			ans[x]+=1;
			return rek(n/x);
		}
	}
	if(n!=1)ans[n]+=1;
}
int main(){
	int n,br,ss,c=1;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d",&br);
		rek(br);
		c=1;
		ss=ans.size();
		for(map<int,int>::iterator y=ans.begin();y!=ans.end();y++){
			if(c==ss){
				printf("%d^%d\n",y->first,y->second);
				break;
			}
			printf("%d^%d*",y->first,y->second);
			c++;
		}
		ans.clear();
	}
}
