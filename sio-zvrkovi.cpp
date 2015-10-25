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
#include <time.h>
#include <string.h>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main(){
	int n,niz[200];
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d",niz+x);
	}
	sort(niz,niz+n);
	int p=0,s=1,ans=n;
	while(s<n){
		if(niz[s]>=2*niz[p]){
			ans--;
			p++;
		}
		s++;
	}
	printf("%d\n",ans);
}
