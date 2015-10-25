#include <cstdio>

int main(){
	unsigned long long n,k,b,z=0;
	scanf("%llu %llu",&n,&k);
	for(int x=0;x<n;x++){
	    scanf("%llu",&b);
	    if(b%k==0)z++;
	}
	printf("%llu",z);
}
