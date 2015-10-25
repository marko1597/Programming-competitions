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
	int N,d,ans;
	double t;
	while(1){
		ans=0;
		scanf("%d",&N);
		if(!N)
			break;
		if(N<0)
			N=-N;
		for(int m=0;m*m<N*2;m++){
			t=1.0*N/(m+1)-1.0*m/2;
			if(int(t)==t && t>0)
				ans++;
			else if(t<=0)
				break;
		}
		printf("%d\n",ans*2);
	}
}
