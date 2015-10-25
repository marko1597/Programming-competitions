#include <cstdio>

int main(){
	int n;
	unsigned long long t;
	scanf("%d",&n);
	t=n;
	for(int x=n-1;n>=1;n--){
		t+=n*2;	
	}
	printf("%llu",t);
}
