#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int n,p=0,br,pa=1,m=0,cis=0;
	for(int i=0;i<3;i++){
		p=0;
		scanf("%d",&n);
		for(int x=0;x<n;x++){
	 	    scanf("%d",&br);
	 	    if(br==p)continue;
	 	    if(p<br){
  			    p=br;
				cis++;
 			}else{
		  	    m=max(cis,m);
				p=br;
				cis=1;
		  	}
 		}
		m=max(cis,m);
 		printf("%d\n",m);
		cis=0;
 		p=0;
		m=0;
	}
}
