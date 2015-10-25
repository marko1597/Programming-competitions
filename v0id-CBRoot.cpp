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

int n;
long double abb(long double n){
	if(n<0)return n*-1;
	return n;
}
int kor(long double start=0,long double end=1626){
	long double mid=(start+end)/2,ttt;
	ttt=mid*mid*mid;
	if(abb(n-ttt)<=0.0005){
		return mid+0.00002;
	}else if(ttt>n){
		return kor(start,mid);
	}else{
		return kor(mid,end);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	for(int x=0;x<t;x++){
		scanf("%d",&n);
		printf("%d\n",kor(0,int(sqrt(float(n)))));
	}
}
