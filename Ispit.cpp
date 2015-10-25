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

typedef long long llint;
bool bio[1000];
int n,niz[1000],na,br;
int upo(int p){
	na=p;
	br=0;
	memset(bio,0,sizeof bio);
	while(bio[na]==false){
		bio[na]=true;
		na=niz[na];
		br++;
	}
	return br;
}
int main(){
	scanf("%d",&n);
	int upoznao,maxn,id;
	for(int x=0;x<n;x++){
		scanf("%d",&niz[x]);
		niz[x]-=1;
	}
	upoznao=upo(0);
	maxn=upoznao;
	id=0;
	for(int x=1;x<n;x++){
		upoznao=upo(x);
		if(upoznao>maxn){
			maxn=upoznao;
			id=x;
		}
	}
	printf("%d\n",id+1);
}
