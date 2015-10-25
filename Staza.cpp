#include <cstdio>

int main(){
	int t,h,m,ans[2],rh,rm;
	scanf("%d",&t);
	for(int dv=0;dv<2;dv++){
		for(int x=0;x<t;x++){
		    scanf("%d:%d",&h,&m);
		    if(x==0)rh=h,rm=m;
			if(x+1==t)rh-=h,rm-=m;
		}
		ans[dv]=rh*60+rm;
	}
	if(ans[0]>ans[1]){
 	    printf("Marko");
	}else{
 	    printf("Dario");
	}
}
