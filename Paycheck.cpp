#include <cstdio>
using namespace std;

int main(){
	int n,lj,p;
	unsigned long long plac=0,ljud=0;
	double ans;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
	    scanf("%d %d",&lj,&p);
	    plac+=lj*p;
	    ljud+=lj;
	}
	ans=double(plac)/double(ljud);
	printf("%.2f",ans);
}
