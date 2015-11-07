#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);
    n += n % 2;
    n++;
    printf("%d\n", n);
}
