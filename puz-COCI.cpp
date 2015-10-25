#include <cstdio>

int main(){
	int a,b,c,ans;
	scanf("%d %d %d",&a,&b,&c);
	if((c-b)/(a-b)<double((c-b))/double((a-b))){
	    ans=(c-b)/(a-b)+1;
	}else{
 	    ans=(c-b)/(a-b);
	}
	printf("%d\n",ans);
}
