#include <cstdio>

int n;
unsigned long long rek(int d){
    int pre=0;
    if(d>=n){
	    if(d==n)return 1;
	    return 0;
	}
	for(int x=1;x<=3;x++){
	    pre += rek(d+x);
	}
	return pre;
}
int main(){
	scanf("%d",&n);
	printf("%ull",rek(0));
}
