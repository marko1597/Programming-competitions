#include <cstdio>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main(){
	int a[3],ans=0;
	for(int y=0;y<3;y++){
	    for(int x=0;x<3;x++){
	    	scanf("%d",a+x);
	    }
		sort(a,a+3);
		if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){
  		    ans++;
		}
	}	
	printf("%d",ans);
}
