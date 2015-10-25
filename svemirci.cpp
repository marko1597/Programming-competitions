#include <cstdio>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
	int n,v;
	float vrs[2200];
	float br,ans[2200],z=0;
	memset(vrs,0,sizeof vrs);
	memset(ans,0,sizeof ans);
	scanf("%d",&n);
	for(int x=0;x<n;x++){
	    scanf("%f %d",&br,&v);
	    vrs[v]=max(vrs[x],br);
	}
	int x=0,y=0;
	while(x!=2200){
	    if(vrs[x]!=0){
 		    ans[y]+=vrs[x];
		}else{
  		    y++;
 		}
		x++;
	}
	for(int x=0;x<2200;x++){
	    z=max(z,ans[x]);
	}
	printf("%.3f\n",z);
}
