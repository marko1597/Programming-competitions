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

const int maxn=2000;
int fw[maxn];
void add(int a,int b){
	for(int x=a;x<maxn;x+=x&-x){
		fw[x]+=b;
	}
}
int querry(int a){
	int ret=0;
	for(int x=a;x>0;x-=x&-x){
		ret+=fw[x];
	}
	return ret;
}
int main(){
	int n,q,a,b;
	scanf("%d %d",&n,&q);
	for(int x=0;x<n;x++){
		scanf("%d",&a);
		add(x+2,a);
	}
	for(int x=0;x<q;x++){
		scanf("%d %d",&a,&b);
		a++,b++;
		printf("%d\n",querry(b)-querry(a-1));
	}
}
