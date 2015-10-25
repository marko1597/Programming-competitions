#include <cstdio>
#include <iostream>
int main(){
	unsigned long long c,n=1,ans,s;
	scanf("%llu %llu",&c,&s);
	for(int x=0;x<s;x++){
	    n*=10;
	}
 	if(c%n!=0){
 	    if(c%n>4*n/10){
		    c-=c%n;
	 	    c+=n;
	 	    ans=c;
	 	    c=0;
		}else{
	  	    c-=c%n;
	  	    ans=c;
	  	    c=0;
		}
	}	
 	printf("%llu\n",ans);
 	//system("pause");
}
