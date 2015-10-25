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

int prosti[200001];
void rastav(int n){
	static map<int,int>m;
	int a=0;
	while(prosti[n]){
		m[prosti[n]]++;
		n/=prosti[n];
	}
	m[n]++;
	for(map<int,int>::iterator x=m.begin();x!=m.end();x++){
		if(++a<m.size())
			printf("%d^%d*",x->first,x->second);
		else
			printf("%d^%d\n",x->first,x->second);
	}
	m.clear();
}
int main(){
	memset(prosti,0,sizeof prosti);
	prosti[0]=prosti[1]=1;
	float granica=sqrt(float(200001));
	for(int x=2;x<=granica;x++)
		if(prosti[x]==0)
			for(int y=x*2;y<200001;y+=x)
				prosti[y]=x;
	int n,br;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d",&br);
		rastav(br);
	}
}
