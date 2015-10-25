#include <cstdio>

int main(){
	int e,f,c,ans=0,g,s;
	scanf("%d %d %d",&e,&f,&c);
	s=e+f;
	while(s/c>0){
		g=s/c;
		s%=c;
		ans+=g;
		s+=g;
	}
	printf("%d\n",ans);
}
