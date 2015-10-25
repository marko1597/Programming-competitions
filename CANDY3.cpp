#include <cstdio>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int t, n;
    scanf("%d",&t);
    unsigned long long br, ans;
    while(t--){
        ans = 0;
        scanf("%d", &n);
        for( int i = 0; i < n; i++ ){
            scanf("%llu", &br);
            br %= n;
            ans += br % n;
            ans %= n;
        }
        if( !ans ){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
