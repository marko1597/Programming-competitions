#include <cstdio>

int main(){
	int n,k,b,niz[200],ans=0;
	scanf("%d %d %d",&n,&k,&b);
	for(int x=0;x<n;x++){
		scanf("%d",niz+x);
	}
	int c=(b-1)%n;
	int s=k,x=c;
	while(s>0){
		ans+=niz[x];
		s--;
		x++;
		if(x>=n)x=0;
	}
	printf("%d\n",ans);
}
