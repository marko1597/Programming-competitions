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

int num[100050];
int pos[100050];
int fen[100050];
void ins(int a,int b){
	for(int x=a;x<100050;x+=x&-x)
		fen[x]+=b;
}
int query(int a){
	int ret=0;
	for(int x=a;x>0;x-=x&-x)
		ret+=fen[x];
	return ret;
}
int ans(int a,int b){
	return query(b)-query(a-1);
}
int main(){
	memset(fen,0,sizeof fen);
	int n,b;
	scanf("%d",&n);
	for(int x=1;x<=n;x++){
		scanf("%d",&b);
		num[x]=b;
		pos[b]=x;
		ins(x,1);
	}
	for(int x=0;x<n;x++){
		if(x%2==0){
			ins(pos[x/2+1],-1);
			printf("%d\n",ans(1,pos[x/2+1]));
		}else{
			ins(pos[n-x/2],-1);
			printf("%d\n",ans(pos[n-x/2],n));
		}
	}
}
