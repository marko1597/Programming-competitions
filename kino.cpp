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
	int n;
	int niz[10005],ans=0;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d",niz+x);
	}
	sort(niz,niz+n);
	for(int x=0;x<n;x++){
		if(niz[x]<=x){
			ans=x+1;
			break;
		}
	}
	printf("%d\n",ans);
}
