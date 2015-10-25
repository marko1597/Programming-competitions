#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	double dolar=100.0;
	int tecaj[5000];
	int n;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d",tecaj+x);
	}
	for(int x=0;x<n-1;x++){
		if(tecaj[x]>tecaj[x+1])
			dolar*=double(tecaj[x])/double(tecaj[x+1]);
	}
	printf("%.2lf\n",dolar);
	system("pause");
}
