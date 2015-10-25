#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
int main(){
	int a,b,a1=0,b1=0;
	int c=100;
	scanf("%d %d",&a,&b);
	while(a>0 || b >0){
 		a1+=c*(a%10);
		b1+=c*(b%10);
		a/=10;
		b/=10;	  
 		c/=10;
    }
    if(a1>b1){
	    printf("%d",a1);
	}else{
 	    printf("%d",b1);
	}
}
