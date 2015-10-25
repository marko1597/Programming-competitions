#include <cstdio>

int main(){
    int ans = 0;
    for( int i = 3; i < 100 ;i++)
        for( int j = -5; j <= 10; j++ )
            for( int k = 4; k < 100; k++ )
                if( i+j+k == 19 )
                    ans++;
    printf("%d",ans);
}
