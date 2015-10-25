#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int abb(int n){
	if(n<0)return n*-1;
	return n;
}
int main(){
    int niz[10],z=0,z1=0,p=0;
    for(int x=0;x<10;x++){
        scanf("%d",&niz[x]);
    }
    z1=niz[0];
    int x=0;
    while(z1<100 && x<10){
        if(x<10)z1+=niz[x+1];
        z+=niz[x];
        x++;
    }
    if(abb(100-z)<abb(100-z1)){
        printf("%d\n",z);
    }else if(abb(100-z)==abb(100-z1)){
        printf("%d\n",z1);
    }else{
        printf("%d\n",z1);
    }
    //system("pause");
}
