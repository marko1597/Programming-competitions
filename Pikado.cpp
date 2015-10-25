#include <cstdio>

int main(){
	int p1,p2;
	long double z1=0,z2=0;
	for(int x=0;x<5;x++){
	    scanf("%d %d",&p1,&p2);
	    z1+=p1;
	    z2+=p2;
	}
	z1/=5;
	z2/=5;
	if(z1>z2){
 	    printf("Dario");		  
    }else{
 	    printf("Slavko");
	}
}
