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

int main(){
    int a, b, ans = 0;
    scanf("%d %d", &a, &b);
    for( int x = a; x <= b; x++ )
        for( int y = 2;; y++ )
            if( x % y != 0 ){
                ans += x;
                break;
            }
    printf("%d\n", ans);
}
