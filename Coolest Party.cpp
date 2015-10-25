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

int polje[16][16];
bool uzeo[16];
int n,ans=0;
bool moze(int n,int t){
	for(int x=0;x<=t;x++){
		if(polje[x][t+1]==0 && uzeo[x]==true)return false;
	}
	return true;
}
void rek(int m=0,int f=0){
	if(m==n){
		ans=max(ans,f);
		return;
	}
	if(moze(m,m)){
		uzeo[m]=true;
		rek(m+1,f+polje[m][0]);
		uzeo[m]=false;
	}
	rek(m+1,f);
}
int main(){
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		for(int y=0;y<=n;y++){
			scanf("%d",&polje[x][y]);
		}
	}
	rek();
	printf("%d\n",ans);
}
