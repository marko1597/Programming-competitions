#include <cstdio>
#include <iostream>
using namespace std;
int rek(long long baza,long long eksponent){
	if(eksponent==0)return 1;
	return (baza*rek(baza,eksponent-1))%10;
}
int main(){
	long long a,b,ans=1,c=0;
	scanf("%lld %lld",&a,&b);
	a%=10;
	if(a==0){
		printf("0");
	}else if(b==0){
		printf("1");
	}else if(a==1){
		printf("1");
	}else if(a==2){
		b%=4;
		if(b==0){
			printf("6");
		}else if(b==1){
			printf("2");
		}else if(b==2){
			printf("4");
		}else if(b==3){
			printf("8");
		}
	}else if(a==3){
		b%=4;
		if(b==0){
			printf("1");
		}else if(b==1){
			printf("3");
		}else if(b==2){
			printf("9");
		}else if(b==3){
			printf("7");
		}
	}else if(a==4){
		b%=2;
		if(b==0){
			printf("6");
		}else if(b==1){
			printf("4");
		}
	}else if(a==5){
		printf("5");
	}else if(a==6){
		printf("6");
	}else if(a==7){
		b%=4;
		if(b==0){
			printf("1");
		}else if(b==1){
			printf("7");
		}else if(b==2){
			printf("9");
		}else if(b==3){
			printf("3");
		}
	}else if(a==8){
		b%=4;
		if(b==0){
			printf("6");
		}else if(b==1){
			printf("8");
		}else if(b==2){
			printf("4");
		}else if(b==3){
			printf("2");
		}
	}else if(a==9){
		b%=2;
		if(b==0){
			printf("1");
		}else if(b==1){
			printf("9");
		}
	}
	printf("\n");
}
