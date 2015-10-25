#include <cstdio>

int main(){
	unsigned long long n,z;
	scanf("%llu",&z);
	for(int x=0;x<z;x++){
		scanf("%llu",&n);
		printf("%llu\n",(n-1)*250+192);
	}
}
