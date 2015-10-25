#include <cstdio>

int main(){
	int a[5];
	int temp;
	for(int x=0;x<5;x++){
		scanf("%d",&a[x]);
	}
	for(int x=0;x<5;x++){
	    if(a[x]>a[x+1] && x<4){
		    temp = a[x];
		    a[x]=a[x+1];
		    a[x+1]=temp;
		for(int z=0;z<5;z++){
			printf("%d ",a[z]);
		}
		printf("\n");
		}else{
  			  if((a[0]!=1 ||  a[1]!=2 || a[2]!=3 || a[3]!=4 || a[4]!=5) && x==4){
	 		      x=-1;
			  }
  		}
	}
}
