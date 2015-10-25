#include <cstdio>

int main(){
	int n,a,w,M,d=1;
	scanf("%d %d",&n,&a);
	scanf("%d",&w);
	M=w;
	for(int x=1;x<n;x++){
	    scanf("%d",&w);
	    if(w>a){
		    printf("Paula je jedan veliki debeli lazov\n");
		    return 0;
		}
	    if(w>M){
		    M=w;
		    d=x+1;
		}
	}
	printf("%d %d",d,M);
}
