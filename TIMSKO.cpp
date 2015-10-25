#include <cstdio>
#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

int mem[1000][1000];
int rek(int n,int m,int k){
	if(mem[n][m]!=-1){
		return mem[n][m];
	}
	if(n==0 || m==0) return mem[n][m]=0;
	if(k==0){
		for(int x=m;x>1;x--){
			if(x*2<=n){
				return mem[n][m]=x;
			}
		}
	}else{
		return max(mem[n-1][m]=rek(n-1,m,k-1),mem[n][m-1]=rek(n,m-1,k-1));
	}
	return 0;
}
int main(){
	int n,m,k;
	memset(mem,-1,sizeof mem);
	scanf("%d %d %d",&n,&m,&k);
	printf("%d",rek(n,m,k));
}
