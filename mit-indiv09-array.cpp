#include <cstdio>

int main(){
	int a[5000],c[5000],n;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
	    scanf("%d",&a[x]);
	}
	printf("%d\n",n);
	for(int x=0;x<n;x++){
	    printf("%d ",x-a[x]);
	}
}
