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
	int niz1[5000],niz2,sum1=0,sum2=0,ans=0,m,k;
	scanf("%d %d",&m,&k);
	for(int x=0;x<m;x++){
		scanf("%d",&niz1[x]);
		sum1+=niz1[x];
	}
	for(int x=0;x<k;x++){
		scanf("%d",&niz2);
		sum2+=niz2;
	}
	for(int x=0;x<m;x++){
		if(double(sum1-niz1[x])/double(m-1)>double(sum1)/double(m)){
			if(double(sum2+niz1[x])/double(k+1)>double(sum2)/double(k))ans++;
		}
	}
	printf("%d\n",ans);
}
