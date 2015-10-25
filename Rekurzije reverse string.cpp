#include <cstdio>
#include <iostream>
#include <stdlib.h>

char reverse(char *s,int len){
	if(len=0){
	    return  s[len-1];
    }else{
        return reverse(s,len-1) & s[len-1];
	}
}
int main(){
	printf("%s",reverse("marko",10));
	system("pause");
}

