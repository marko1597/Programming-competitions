#include <cstdio>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int brojac=1;
	do{
		brojac=brojac+1;
		if(brojac*brojac>n)brojac=n;
	}while(n%brojac!=0);
	printf("%d\n",n-n/brojac);
}
