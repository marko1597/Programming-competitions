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

llint niz1[12000],niz2[12000],rez[12000*2];
void mul(int a,int b){
	for(int x=0;x<a;x++){
		for(int y=0;y<b;y++){
			rez[x+y]+=niz1[x]*niz2[y];
		}
	}
	for(int x=0;x<a+b;x++){
		rez[x+1]+=rez[x]/10;
		rez[x]%=10;
	}
}
int main(){
	char br1[12000],br2[12000];
	int s1,s2,N;
	scanf("%d",&N);
	for(int hh=0;hh<N;hh++){
		memset(niz1,0,sizeof niz1);
		memset(niz2,0,sizeof niz2);
		memset(rez,0,sizeof rez);
		scanf("%s %s",br1,br2);
		s1=strlen(br1),s2=strlen(br2);
		for(int x=0;x<s1;x++){
			niz1[x]=br1[s1-1-x]-'0';
		}
		for(int x=0;x<s1;x++){
			niz1[x]=br1[s1-1-x]-'0';
		}
		for(int x=0;x<s1;x++){
			niz2[x]=br2[s2-1-x]-'0';
		}
		mul(s1,s2);
		int x=12000*2-1;
		while(rez[x]==0)x--;
		for(int c=0;c<=x;c++)printf("%d",rez[c]);
		printf("\n");
	}
}
