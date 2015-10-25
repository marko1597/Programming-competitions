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
	int a,b,c,ans;
	while(1){
		ans=0;
		scanf("%d %d %d",&a,&b,&c);
		if(!a)break;
		while(a>0){
			a-=b;
			ans++;
			if(a<=0){
				break;
			}
			a+=c;
			ans++;
		}
		printf("%d\n",ans);
	}
}
