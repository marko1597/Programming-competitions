#include <cstdio>

typedef long long llint;

int main(){
	llint n,k,c,razlika=0,ans=0;
	scanf("%lld %lld",&n,&k);
	for(int x=0;x<n;x++){
		scanf("%lld",&c);
		razlika=c+razlika-k;
		if(razlika<0){
			ans+=-razlika;
		}else{
			ans+=razlika;
		}
	}
	printf("%lld\n",ans%=1000000000);
	//system("pause");
}
