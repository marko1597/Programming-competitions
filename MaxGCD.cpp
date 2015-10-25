#include <cstdio>
#include <algorithm>
using namespace std;

int gdc(int a,int b){
	if(b==0)return a;
	gdc(b,a%b);
}
int main(){
	int n,niz[1000];
	int ans=0;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d",&niz[x]);
	}
	for(int x=0;x<n;x++){
		for(int y=x+1;y<n;y++){
			if(x==y)y++;
			if(y>=n)break;
			ans=max(ans,gdc(niz[x],niz[y]));
		}
	}
	printf("%d\n",ans);
//	system("pause");
}
