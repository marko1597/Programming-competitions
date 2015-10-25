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
	while(1){
		int n,br,c=0,cc;
		scanf("%d",&n);
		cc=n;
		if(!n)
			break;
		for(int x=0;x<n;x++){
			scanf("%d",&br);
			if(br==1 && n==1)
				break;
			if(cc==0){
				c++;
				continue;
			}
			if(br<cc)
				cc=br;
			cc--;
		}
		printf("%d\n",c);
	}
}
