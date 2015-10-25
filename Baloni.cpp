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
#include <string.h>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main(){
	stack<int>L,R;
	int N,b;
	scanf("%d",&N);
	for(int x=0;x<N;x++){
		scanf("%d",&b);
		L.push(b);
	}
	for(int x=0;x<N;x++)
		R.push(L.top()),L.pop();
	int l,r,to,T=0,t=0;
	bool I=false;
	while(L.size()+R.size()>1){
		while(R.empty()==false){
			if(L.empty()==true || I==false)L.push(R.top()),R.pop();
			if(R.empty()==true)break;
			I=false;
			l=L.top()+t,r=R.top()+t;
			if(l>r){
				if(r>=l/float(2))L.pop(),I=true;
			}else if(l<r){
				if(l>=r/float(2))R.pop(),I=true;
			}else{
				L.pop();
				I=true;
			}
		}
		if(L.size()+R.size()<=1)break;
		R.push(L.top()),L.pop();
		l=L.top()+t,r=R.top()+t;
		if(l>r){
			T=-2*r+l;
		}else if(l<r){
			T=-2*l+r;
		}
		do{
			l=L.top()+t,r=R.top()+t;
			if(l>r){
				T=min(T,-2*r+l);
			}else if(l<r){
				T=min(T,-2*l+r);
			}
			R.push(L.top()),L.pop();
		}while(L.empty()==false);
		t+=T;
	}
	printf("%d\n",t);
}
