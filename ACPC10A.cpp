#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int a,b,c;
    do{
        scanf("%d %d %d", &a, &b, &c);
        if( !a && !b && !c )
            break;
        if( b-a == c-b ){
            printf("AP %d\n", c+b-a);
        }else{
            printf("GP %d\n", c*b/a);
        }
    }while( a | b | b );
}
