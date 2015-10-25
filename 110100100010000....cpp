#include <cstdio>
#include <math.h>
#include <string>
#include <sstream>
using namespace std;

int main(){
	int k,n;
	double ans;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d",&k);
		ans=(-1+sqrt(1+8*(k-1)))/2;
		if(int(ans)==ans){
	 	    printf("1 ");
		}else{
  		    printf("0 ");	  
	    }
	}
	printf("\n");
}
