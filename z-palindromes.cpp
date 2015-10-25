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

int prov(int n){
	if(n>='0' && n<='9'){
		return n;
	}
	n=tolower(n);
	if(n>='a' && n<='z'){
		return n;
	}
	return 0;
}
char rj[8000000];
int s;
bool bio[8000000];
bool palin(int p){
	int k,po;
	for(int x=p;x<s && prov(rj[x])!=0;x++){
		bio[x]=true;
		k=x;
	}
	po=k-p+1;
	for(int x=0;x<po/2;x++){
		if(rj[p+x]!=rj[k-x])return false;
	}
	return true;
}
int main(){
	int ans=0;
	gets(rj);
	memset(bio,0,sizeof bio);
	s=strlen(rj);
	for(int x=0;x<s;x++){
		rj[x]=prov(rj[x]);
	}
	for(int x=0;x<s;x++){
		if(bio[x]==true || rj[x]==0)continue;
		if(palin(x)==true)ans++;
	}
	printf("%d\n",ans);
}
