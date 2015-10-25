#include <cstdio>

int main(){
	unsigned long long a,b,c;
	start:
	scanf("%llu %llu %llu",&a,&b,&c);
	unsigned long long x=0,y=0,t=0;
	while(true){
	    if(a==0 && b==0)break;
	    x=0;
	    if(t>0)break;
	    if(a*x+b*y>c)break;
	    while(true){
		    if(a*x+b*y==c){
		   	    t++;
		   	    break;
		   	}else if(a*x+b*y>c){
 			    break;
 			}
		    x++;
		}
		y++;
	}
	if(a!=0 || b!=0 || c!=0){
		if(t>0){
	 	    printf("YES\n");
		}else{
	 	    printf("NO\n");
		}
	}
	if(a!=0 || b!=0 || c!=0)goto start;
}
