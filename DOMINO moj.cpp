#include <cstdio>

int main(){
	int n,z=0,g=0;
	scanf("%d",&n);
	for(int x=0;x<=n;x++){
	    for(int y=g;y<=n;y++){
 		    z+=y+x;
		}
		g++;
	}
	printf("%d",z);
}
