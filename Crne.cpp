#include <cstdio>

int main(){
	int n,ans=-1;
	scanf("%d",&n);
	for(int x=0;x<=n;x++){
	    for(int z=0;z<=n-x;z++){
		    if(ans<(x+1)*(z+1)){
			   ans=(x+1)*(z+1);
		    }
		}
	}
	printf("%d",ans);
}
