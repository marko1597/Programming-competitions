#include <cstdio>
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

int main(){
	map<int,int>pomak;
	int n,niz1[50000],niz2[50000],niz3[50000],ans[50000];
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d",&niz1[x]);
		niz2[x]=niz1[x];
		pomak[niz1[x]]=x;
	}
	sort(niz2,niz2+n,greater<int>());
	for(int x=0;x<n;x++){
		scanf("%d",&niz3[x]);
	}
	sort(niz3,niz3+n,greater<int>());
	for(int x=0;x<n;x++){
		ans[pomak[niz2[x]]]=niz3[x];
	}
	for(int x=0;x<n;x++){
		printf("%d ",ans[x]);
	}
	printf("\n");
}
