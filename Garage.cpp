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

int n,m,rate[100],tez[2000],br;
bool bio[100];
int koji[100];
queue<int>q;
int park(int nn){
	if(nn>0){
		int mj=-1;
		for(int x=0;x<n;x++){
			if(!bio[x]){
				koji[x]=nn;
				bio[x]=1;
				mj=x;
				break;
			}
		}
		if(mj==-1){
			q.push(nn);
		}
		return rate[mj]*tez[nn-1];
	}else{
		nn*=-1;
		for(int x=0;x<n;x++){
			if(koji[x]==nn){
				if(q.empty()){
					bio[x]=0;
					koji[x]=-1;
				}else{
					koji[x]=q.front();
					q.pop();
					return rate[x]*tez[koji[x]-1];
				}
				break;
			}
		}
		return 0;
	}
}
int main(){
	memset(koji,-1,sizeof koji);
	int ans=0;
	scanf("%d %d",&n,&m);
	for(int x=0;x<n;x++){
		scanf("%d",rate+x);
	}
	for(int x=0;x<m;x++){
		scanf("%d",tez+x);
	}
	for(int x=0;x<2*m;x++){
		scanf("%d",&br);
		ans+=park(br);
	}
	printf("%d\n",ans);
}
