#include <stdlib.h>
#include <string.h>
#include <cstdio>
using namespace std;

int main(){
	int m,n,br=0,ans=0,c[100],b[100];
	memset(b,-1,sizeof b);
	scanf("%d %d",&m,&n);
	for(int x=0;x<n;x++){
	    scanf("%d",c+x);
	    b[c[x]-1]=1;
	}
	for(int x=0;x<n;x++){
	    for(int y=0;y<n;y++){
		    if(c[x]<y+1 && b[y]==-1)br++;
		}
	}
	ans=br*n;
	printf("%d",ans);
}
