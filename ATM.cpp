#include <cstdio>
using namespace std;
int main(){
	int x;
	float y;
	scanf("%d %f",&x,&y);
	if(x%5!=0){
 	    printf("%.2f",y);
 	}else{
  	    if(y-x>=0){
  		    printf("%.2f",y-float(x)-0.5);
  		}else{
  		    printf("%.2f",y);
  		}
	}
	printf("\n");
}
