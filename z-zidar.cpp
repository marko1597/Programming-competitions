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
	int n,niz[1005],ans=0;
	float pans;
	set<int>ni;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d",&niz[x]);
		ni.insert(niz[x]);
	}
	sort(niz,niz+n);
	for(int x=0;x<n;x++){
		for(int y=x+1;y<n;y++){
			pans=sqrt(float(niz[x]*niz[x])+float(niz[y]*niz[y]));
			if(pans==int(pans) && ni.find(int(pans))!=ni.end())ans++;
			if(int(pans)>niz[n-1])break;
		}
	}
	printf("%d\n",ans);
}
