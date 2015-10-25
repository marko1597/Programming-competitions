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

int niz[200000+50];
int n,q;
int query(int a){
	int ret=0;
	for(int x=a;x>0;x-=x&-x)
		ret+=niz[x];
	return ret;
}
void ins(int a,int b){
	for(int x=a;x<n;x+=x&-x)
		niz[x]+=b;
}
int main(){
	int a,b;
	scanf("%d %d",&n,&q);
	n+=20;
	for(int x=0;x<q;x++){
		scanf("%d",&a);
		if(a==1){
			scanf("%d %d",&a,&b);
			ins(a,1);
			ins(b+1,-1);
		}else{
			scanf("%d",&a);
			printf("%d\n",query(a)%2);
		}
	}
}
