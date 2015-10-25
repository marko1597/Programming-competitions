#include <cstdio>

int main(){
	int a,b,c,d,ans=0;
	double z0,z9,z18,z36;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	z0=double(a)/double(c)+double(b)/double(d);
	z9=double(c)/double(d)+double(a)/double(b);
	z18=double(d)/double(b)+double(c)/double(a);
	z36=double(b)/double(a)+double(d)/double(c);
	if(z0>z9 && z0>z18 && z0>z36){
 	    ans=0;
	}else if(z9>z0 && z9>z18 && z9>z36){
 	    ans=1;
	}else if(z18>z0 & z18>z9 & z18>z36){
 	    ans=2;
	}else if(z36>z0 & z36>z9 & z36>z18){
 	    ans=3;
	}
	printf("%d",ans);
}
