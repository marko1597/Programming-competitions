#include <cstdio>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
int t[1000];
int c;
void rek(int n,int d){
    if(n==0){
        for(int y=0;y<d;y++){
            printf("%d",t[y]);
        }        
        printf("\n");                               
        return;
    }
    for(int x=0;x<=9;x++){
        t[d]=x;
        rek(n-1,d+1);
        t[d]=0;
    }
}
int main(){
    scanf("%d",&c);
    rek(c,0);
    system("pause");
}
