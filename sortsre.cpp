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

bool cmp(const string &a,const string &b){
	int mida=a.size()/2,midb=b.size()/2;
	int doo=min(mida,midb);
	for(int x=0;x<=doo;x++){
		if(a[mida+x]!=b[midb+x])return a[mida+x]<b[midb+x];
		if(a[mida-x]!=b[midb-x])return a[mida-x]<b[midb-x];
	}
	return a.size()<b.size();
}
int main(){
	int n;
	string niz[1000];
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		cin>>niz[x];
	}
	sort(niz,niz+n,cmp);
	for(int x=0;x<n;x++){
		printf("%s\n",niz[x].c_str());
	}
}
