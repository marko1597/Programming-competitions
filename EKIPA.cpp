#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;

int main(){
	int n,m,g,u;
	float b,niz[100],ans=0;
	memset(niz,0,sizeof niz);
	scanf("%d %d %d",&n,&m,&g);
	for(int x=0;x<n;x++){
		for(int y=0;y<m;y++){
			scanf("%d %f",&u,&b);
			niz[u-1]=max(float(b+0.00005),niz[u-1]);
		}
	}
	sort(niz,niz+100);
	for(int x=0,y=100-1;x<g;x++,y--){
		ans+=niz[y];
	}
	printf("%.1f\n",ans);
	//system("pause");
}
