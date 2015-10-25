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

int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		int pot=0,ans=0;
		scanf("%d",&n);
		while(pow(5.0,pot)<=n)
			pot++;
		for(int x=1;x<pot;x++)
			ans+=n/pow(5.0,x);
		printf("%d\n",ans);
	}
}
