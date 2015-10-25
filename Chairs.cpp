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

struct sp{
	vector<int>niz;
	int p,s;
	void init(int n){
		s=p=0;
		niz.assign(n,0);
	}
	void push(int n){
		niz[s++]=n;
	}
	bool pop(){
		if(p>=niz.size())return false;
		p++;
		return true;
	}
	int top(){
		if(p>=niz.size())return -1;
		return niz[p];
	}
	void sortiraj(){
		sort(niz.begin(),niz.end());
	}
};
int main(){
	int n,a,b,c;
	sp nizu,nizi;
	scanf("%d",&n);
	nizu.init(n);
	nizi.init(n);
	for(int x=0;x<n;x++){
		scanf("%d:%d:%d",&a,&b,&c);
		nizu.push(a*3600+b*60+c);
		scanf("%d:%d:%d",&a,&b,&c);
		nizi.push(a*3600+b*60+c);
	}
	nizu.sortiraj();
	nizi.sortiraj();
	int i=0,p=0,ans=0;
	while(nizu.top()!=-1){
		p++;
		i=nizu.top();
		while(i>nizi.top()){
			nizi.pop();
			p--;
		}
		nizu.pop();
		ans=max(ans,p);
	}
	printf("%d\n",ans);
}
