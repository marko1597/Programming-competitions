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

const int maxn = 1005;
char polje[maxn][maxn], znak[maxn];
int lr, ls, gravity = 0;
int gr[] = {1, 0, -1, 0};
int gs[] = {0, -1, 0, 1};
int n, m;
int loptica_process(){
    int sakupio = 0;
    while(1){
        if(lr+gr[gravity] >= n || lr+gr[gravity] < 0 || ls+gs[gravity] >= m || ls+gs[gravity] < 0) break;
        if( polje[ lr + gr[gravity] ][ ls + gs[gravity] ] == '#' ) break;
        if( polje[ lr + gr[gravity] ][ ls + gs[gravity] ] == '*' ) {
            sakupio ++;
            polje[ lr + gr[gravity] ][ ls + gs[gravity] ] = '.';
        }
        lr += gr[gravity];
        ls += gs[gravity];
    }
    return sakupio;
}
int main(){
    scanf("%d %d", &n, &m);
    for( int i = 0; i < n; i++ )
        scanf("%s", polje[i]);
    scanf("%s", znak);

    for( int i = 0; i < n; i++ )
        for( int j = 0; j < m; j++ )
            if( polje[i][j] == 'O'){
                polje[i][j] = '.';
                lr = i;
                ls = j;
            }
    printf("%d\n", loptica_process());
    for( int i = 0; i < strlen(znak); i++ ){
        if( znak[i] == 'L'){
            gravity ++;
            gravity %= 4;
        }else{
            gravity+=3;
            gravity %= 4;
        }
        printf("%d\n", loptica_process());
    }
}
