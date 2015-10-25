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

int x[600],y[600];
int main(){
	int n,br,ans=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d %d",x+i,y+i);
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++){
			br=2;
			for(int k=j+1;k<n;k++)
				if((y[k]-y[i])*(x[j]-x[i])==(y[j]-y[i])*(x[k]-x[i]))
					br++;
			ans=max(ans,br);
		}
	printf("%d\n",ans);
}
