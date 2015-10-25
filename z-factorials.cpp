#include <iostream>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

int main(){
	char str[50];
	int num,br=0;
	unsigned long long ans=1;
	memset(str,0,sizeof str);
	scanf("%d%s",&num,str);
	for(int x=0;x<50;x++){
	    if(str[x]=='!')br++;
	}
	while(num>=2){
 	    ans*=num;
 	    num-=br;
 	}
 	printf("%llu\n",ans);
}
