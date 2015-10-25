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

int main(){
	int niz1[20],niz2[20],ans[20],d=0;
	memset(niz1,0,sizeof niz1);
	memset(niz2,0,sizeof niz2);
	int s;
	char num[51];
	scanf("%s",&num);
	s=strlen(num);
	d=max(s,d);
	for(int x=0;x<s;x++){
		niz1[x]=num[s-1-x]-'0';
	}
	scanf("%s",&num);
	s=strlen(num);
	d=max(s,d);
	for(int x=0;x<s;x++){
		niz2[x]=num[s-1-x]-'0';
	}
	for(int x=d-1;x>=0;x--){
		printf("%d",niz1[x]+niz2[x]);
	}
	printf("\n");
}
