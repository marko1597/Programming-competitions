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

int maxn=1050;
int mod=10007;
vector<vector<int> >matrx;
int pot(int a,int b){
	if(b==0)
		return 1;
	int tmp=pot(a,b/2);
	tmp*=tmp;
	tmp%=mod;
	if(b%2==0)
		return tmp;
	return (tmp*a)%mod;
}
void ins(int bx,int by,int val){
	for(int x=bx;x<maxn;x+=x&-x)
		for(int y=by;y<maxn;y+=y&-y){
			matrx[x][y]*=val;
			matrx[x][y]%=mod;
		}
}
void del(int bx,int by,int val){
	if(val==1)return;
	for(int x=bx;x<maxn;x+=x&-x)
		for(int y=by;y<maxn;y+=y&-y){
			matrx[x][y]=matrx[x][y]*pot(val,mod-2);
			matrx[x][y]%=mod;
		}
}
int query(int bx,int by){
	int ret=1;
	for(int y=by;y>0;y-=y&-y)
		for(int x=bx;x>0;x-=x&-x){
			ret*=matrx[x][y];
			ret%=mod;
		}
	return ret;
}
int proc(int x1,int y1,int x2,int y2){
	int a=query(x2,y2);
	int b=query(x1-1,y1-1);
	int c=query(x1-1,y2);
	int d=query(x2,y1-1);
	int e=pot((c*d)%mod,mod-2);
	int f=(a*b)%mod;
	return (e*f)%mod;
}
int main(){
	vector<int>decc;
	int q,t,a,b,c,d,val;
	scanf("%d %d",&maxn,&q);
	maxn+=20;
	decc.assign(maxn,1);
	matrx.insert(matrx.begin(),maxn,decc);
	for(int x=0;x<q;x++){
		scanf("%d",&t);
		if(t==1){
			scanf("%d %d %d",&a,&b,&val);
			a++,b++;
			del(a,b,proc(a,b,a,b));
			ins(a,b,val);
		}else{
			scanf("%d %d %d %d",&a,&b,&c,&d);
			a++,b++,c++,d++;
			printf("%d\n",proc(a,b,c,d));
		}
	}
}
