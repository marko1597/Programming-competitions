#include <cstdio>
#include <cstring>
#include <iostream>
#include <math.h>
#include <cmath>
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

int niz[20];
int main(){
	int n=0,br,ans;
	while(1){
		n=0,ans=0;
		while(1){
			scanf("%d",&br);
			if(br==0 || br==-1)break;
			niz[n]=br;
			n++;
		}
		if(br==-1)break;
		sort(niz,niz+n);
		for(int x=0;x<n;x++)
			if(find(niz,niz+n,niz[x]*2)!=niz+n)
				ans++;
		printf("%d\n",ans);
	}
}
