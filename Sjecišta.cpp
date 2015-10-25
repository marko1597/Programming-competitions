#include <cstdio>

int main(){
	int n,rez=0;
	scanf("%d",&n);
   	for (int i=2; i<n-1; i++) {
      	rez += (i-1)*(n-1-i);
   	}
   	rez *= n;
   	rez /= 4;
   	printf("%d\n", rez);
}
