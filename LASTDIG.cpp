#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
using namespace std;

long long a, b;

int ans[10][4] = {{0,0,0,0},
    {1,1,1,1},
    {2,4,8,6},
    {3,9,7,1},
    {4,6,4,6},
    {5,5,5,5},
    {6,6,6,6},
    {7,9,3,1},
    {8,4,2,6},
    {9,1,9,1}};

int main(){
    int t;
    scanf("%d", &t);
    while( t-- ){
        scanf("%lld %lld", &a, &b);
        a %= 10;
        if( b == 0 ){
            printf("1\n");
        }else if( a == 0 )
            printf("0\n");
        else if( a == 1 ){
            printf("1\n");
        }else{
            printf("%d\n", ans[a][(b-1)%4]);
        }
    }
}
