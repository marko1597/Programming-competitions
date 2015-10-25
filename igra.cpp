#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;

int n,niz[130],mem[130][130];
int rek(int p,int k,int i=0){
	if(mem[p][k]!=-1)return mem[p][k];
	if(p>k)return mem[p][k]=0;
	if(i%2==1){
        return mem[p][k]=max(rek(p+1,k,i+1),rek(p,k-1,i+1));
 	}
	return mem[p][k]=max(rek(p+1,k,i+1)+niz[p],rek(p,k-1,i+1)+niz[k]);
}
int main(){
	memset(mem,-1,sizeof mem);
	scanf("%d",&n);
	int poc=0,kraj=n-1;
	for(int x=0;x<n;x++){
	    scanf("%d",niz+x);
	}
	printf("%d\n",rek(poc,kraj));
	system("pause");
}
