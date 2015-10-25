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

int niz[400050];
int main(){
	int n,ans=0,p=0,b=0;
	scanf("%d",&n);
	p=n-1;
	for(int x=0;x<n;x++)
		scanf("%d",niz+x);
	sort(niz,niz+n);
	for(int x=n-2;x>1;x--){
		if(niz[p]<niz[x]+niz[x-1] && x<p)b++;
		else{
			while(!(niz[p]<niz[x]+niz[x-1])&& x<p){
				ans=max(b,ans);
				b=0;
				p--;
				if(n<0)break;
			}
		}
	}
	printf("%d\n",ans+2);
}
