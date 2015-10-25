#include <cstdio>
#include <stdlib.h>
#include <iostream>
using namespace std;

int n,k,niz[20];
int rek(int t,int z){
	int ans=0;
	if(t==n){
 	    if(z==k)return 1;
 	    return 0;
 	}
 	ans+=rek(t+1,z+niz[t]);
 	ans+=rek(t+1,z-niz[t]);
 	return ans;
}
int main(){
	scanf("%d %d",&n,&k);
	for(int x=0;x<n;x++){
	    scanf("%d",niz+x);
	}
	printf("%d",rek(0,0));
	//system("pause");
}
