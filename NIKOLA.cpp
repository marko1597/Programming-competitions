#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
int n,a[1000],zm=999999999,mem[1000][1000];
int rek(int p=1,int v=1){
	if(p<0||p>=n)return zm;
	if(p==n-1)return a[p];
	if(mem[p][v]!=-1)return mem[p][v];
	return mem[p][v]=a[p]+min(rek(p-v,v),rek(p+v+1,v+1));
}
int main(){
	scanf("%d",&n);
	for(int x=0;x<n;x++) scanf("%d",&a[x]);
	memset(mem,-1,sizeof mem);
	printf("%d",rek());
	system("pause");
}
