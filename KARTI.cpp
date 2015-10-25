#include <cstdio>
int m(int n){
	if(n>100)return n-10;
	return m(m(n+11));
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",m(n));
}
