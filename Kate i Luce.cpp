#include <cstdio>

int main(){
	int n,ans=9999999;
	scanf("%d",&n);
	for(int x=1;x<=n;x++){
	    if(n%x==0){
		    if(ans>n/x*2+x*2)ans=n/x*2+x*2;
		}
	}
	printf("%d",ans);
}
