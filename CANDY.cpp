#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

#define M 100000

int P[M];

int main(){
    long i = 0, t, s = 0;
    long ans = 0;
    while(1){
        scanf("%ld", &t);
        if( t == -1 )
            break;
        s += t;
        P[i++] = t;
    }
    s /= i;
    long m = 0;
    for( int x = 0; x < i; x++ ){
        if( P[x] < s )
            ans += s - P[x];
        else
            m++;
    }
    printf("%ld\n", ans );
}
