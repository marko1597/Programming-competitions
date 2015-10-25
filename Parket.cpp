#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int a,b;
    int tren;
    int resa,resb;
    scanf("%d %d",&a,&b);
    for(int x=1;x<a/2;x++){
        tren=(a-x*2)/2;
        if((tren-2)*(x)==b){
            resa=x+2;
            resb=tren;
            break;
        }
    }
    printf("%d %d\n",max(resa,resb),min(resa,resb));
    //system("pause");
}
