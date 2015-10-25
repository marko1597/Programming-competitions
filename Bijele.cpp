#include <cstdio>

int main(){
	int a[6];
	int b[6]={1,1,2,2,2,8};
	scanf("%d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
	for(int x=0;x<6;x++){
	    printf("%d ",b[x]-a[x]);
	}
}
