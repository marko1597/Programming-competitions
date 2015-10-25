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

int cjet(int h,int m){
	int br=h*60+m;
	if(br>=420 && br<1140){
		return 10;
	}else{
		return 5;
	}
}
int main(){
	int n,ans=0,h,m,t;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d:%d %d",&h,&m,&t);
		for(int y=0;y<t;y++){
			ans+=cjet(h+(m+y)/60,(m+y)%60);
		}
	}
	printf("%d\n",ans);
}
