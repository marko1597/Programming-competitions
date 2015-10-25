#include <cstdio>

int main(){
    int broj=0;
    int n,m;
    scanf("upisi broj: ",&n,&m);
    for(int x=n;x<m;x++){
       if(x%34==0){
                   broj++;
       }
    }
    printf("%d\n",broj);
}
