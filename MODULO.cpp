#include <cstdio>
#include <stdlib.h>
#include <iostream>
#include <string>

int main(){
	int b[10],mod[42],r=0;
	memset(mod,0,sizeof mod);
	for(int x=0;x<10;x++){
	    scanf("%d",&b[x]);
	    mod[b[x]%42]=1;
	}
	for(int x=0;x<42;x++){
	    if(mod[x]==1) r++;
	}
	printf("%d",r);
}
