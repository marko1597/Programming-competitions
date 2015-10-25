#include <cstdio>

int main(){
	int n,r=1;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
	    r*=2;
	}
	printf("%d",(r+1)*(r+1));
}
