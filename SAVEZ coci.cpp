#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>
#include <stack>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <list>
#include <ctime>
#include <algorithm>
using namespace std;

int mat[256][256];

char in[2000000];
int maxx( int a, int b ){
    if(a > b)
        return a;
    return b;
}
int main(){
    int n;
    scanf("%d", &n);
    for( int i = 0; i < n; i++ ){
        scanf("%s", in);
        mat[in[0]][in[strlen(in)-1]]++;
    }
    int ans =0;
    for( int i = 0; i < 256; i++ )
        for( int j = 0; j < 256; j++ )
            ans = maxx(ans, mat[i][j]);

    printf("%d\n", ans);
}
