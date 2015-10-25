#include <cstdio>
using namespace std;

typedef long long llint;
int main(){
	llint n,ans=0,b;
	scanf("%lld",&n);
	if(n>0)ans=1;
	for(int x=0;x<n;x++){
		b=x+1;
		while(b%10==0)b/=10;
		ans=(ans*(b))%1000000;
		while(ans%10==0)ans/=10;
	}
	printf("%lld\n",ans%10);
}
