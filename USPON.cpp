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
	int n,niz[1000],ans=0,start=-1;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d",&niz[x]);
	}
	for(int x=0;x<n-1;x++){
		if(niz[x]<niz[x+1]){
			if(start==-1)start=x;
		}else{
			if(start!=-1)ans=max(ans,niz[x]-niz[start]);
			start=-1;
		}
	}
	if(start!=-1)ans=max(ans,niz[n-1]-niz[start]);
	printf("%d\n",ans);
}
