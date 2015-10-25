#include <cstdio>

int main(){
	start:
	int n,ans=0;
	scanf("%d",&n);
	if(n==0)return  0;
	for(int x=n;x>=1;x--){
	    ans+=x*x;
	}
	printf("%d\n",ans);
	goto start;
}
