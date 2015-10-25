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

int ans[200*200];
int main(){
	int n,q,b,t=0;
	scanf("%d %d",&n,&q);
	for(int x=0;x<n;x++){
		scanf("%d",&b);
		for(int y=0;y<b;y++)
			ans[t]=x+1,t++;
	}
	for(int x=0;x<q;x++){
		scanf("%d",&b);
		printf("%d\n",ans[b]);
	}
}
