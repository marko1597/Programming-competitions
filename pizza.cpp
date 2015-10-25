#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
	int n;
	int r1=0,r2=0,r3=0,brp=0;
	string raz;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
	    cin >> raz;
	    if(raz=="1/4")r1++;
	    if(raz=="1/2")r2++;
	    if(raz=="3/4")r3++;
	}
	while(r1>=1 && r3>=1){
 	    brp+=1;
 	    r1--;
 	    r3--;
	}
	while(r1>=4){
 	    brp+=1;
 	    r1-=4;
	}
	while(r2>=2){
 	    brp+=1;
 	    r2-=2;
	}
	while(r2>=1 && r1>=2){
	    brp+=1;
	    r2-=1;
	    r1-=2;
	}
	if(r1==3 && r2==1 && r3==1){
 	    r1=0,r2=0,r3=0;
 	    brp+=2;
	}
	if(r1==3 && r2==1){
 	    r1=0,r2=0;
 	    brp+=2;
	}
	if(r1==2 && r2==1){
 	    r1=0,r2=0;
 	    brp+=2;
	}
	if(r1==1 && r2==1){
 	    r1=0,r2=0;
 	    brp+=1;
	}
	if(r1==3 && r2==0){
 	    r1=0,r2=0;
 	    brp+=1;
	}
	if(r1==2 && r2==0){
 	    r1=0,r2=0;
 	    brp+=1;
	}
	if(r1==1 && r2==0){
 	    r1=0,r2=0;
 	    brp+=1;
	}
	printf("%d\n",brp+r3+r2+r1);
}
