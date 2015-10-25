#include <cstdio>
#include <cstring>
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <time.h>
#include <string.h>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
using namespace std;

typedef long long llint;

int fak[] = {2,3,4,5,6,7,8,9};
int niz[8];

int main(){
    llint n;
    scanf("%lld", &n);
    if( n == 1 ){
        printf("1\n");
        return 0;
    }
    for( int x = 7; x >= 0; x-- )
        while( n % fak[ x ] == 0 && n){
            niz[ x ]++;
            n /= fak[ x ];
        }
    if( n == 1 ){
        for( int x = 0; x < 8; x++)
            for( int j = 0; j < niz[ x ]; j++ )
                putchar('0' + x + 2);
        putchar('\n');
    }else if( n == 0){
        printf("10\n");
    }else
        printf("-1\n");
}
