#include <cstdio>
#include <stdlib.h>
int main(){
    int n, g;
    scanf("%d", &n );
    long double c = 2;
    g = (n-2)*2;
    for( int x = 0; x < g ; x++ ){
        if( x % 2 == 0 ){
            c += x+2;
        }else{
            c = 1.0/c + 2;
        }
    }
    printf("%.10llf\n",c*2);
	system("pause");
}
