#include <cstdio>

int main(){
	int s[10];
	for(int x=0;x<8;x++){
	    scanf("%d",s+x);
	}
	if(s[0]==1 && s[1]==2 && s[2]==3 && s[3]==4 && s[4]==5 && s[5]==6 && s[6]==7 && s[7]==8){
	    printf("ascending");
	}else if(s[0]==8 && s[1]==7 && s[2]==6 && s[3]==5 && s[4]==4 && s[5]==3 && s[6]==2 && s[7]==1){
	    printf("descending");
	}else{
 	    printf("mixed");
	}	  			 
}
