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
	int n,niz[10000],k,a,b,c;
	vector<int>v;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d",&niz[x]);
	}
	scanf("%d",&k);
	for(int x=0;x<k;x++){
		scanf("%d %d %d",&a,&b,&c);
 		for(int x=a-1;x<b;x++){
			v.push_back(niz[x]);
		}
		sort(v.begin(),v.end());
		printf("%d\n",v[c-1]);
		v.clear();
	}
}
