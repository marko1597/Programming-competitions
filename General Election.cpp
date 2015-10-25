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
	int n,m,t,br,mm,ans;
	vector<int>v;
	scanf("%d",&t);
	for(int hh=0;hh<t;hh++){
		scanf("%d %d",&n,&m);
		v.assign(n,0);
		for(int x=0;x<m;x++){
			for(int y=0;y<n;y++){
				scanf("%d",&br);
				v[y]+=br;
			}
		}
		mm=0;
		for(int x=0;x<n;x++){
			if(mm<v[x]){
				mm=v[x];
				ans=x;
			}
		}
		printf("%d\n",ans+1);
		v.clear();
	}
}
