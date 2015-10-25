#include <cstdio>
#include <stdlib.h>
int main(){
	float z,u=0;
	for(int x=0;x<12;x++){
	    scanf("%f",&z);
	    u+=z;
	}
	printf("$%.2f\n",u/float(12));
}
