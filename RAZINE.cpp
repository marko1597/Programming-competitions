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
	int n,niz[1000],ans=0,b;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d",&niz[x]);
	}
	for(int x=n-1;x>=1;x--){
		if(niz[x]<=niz[x-1]){
			b=(niz[x-1]-niz[x])+1;
			ans+=b;
			niz[x-1]-=b;
		}
	}
	printf("%d\n",ans);
}
