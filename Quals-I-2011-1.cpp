#include <cstdio>

typedef unsigned long long llint;

int main(){
	llint a,b,c;
	scanf("%llu %llu %llu",&a,&b,&c);
	if(b*c>a){
	    printf("-%llu\n",b*c-a);
	}else{
 	    printf("%llu\n",a-b*c);
 	}
}
