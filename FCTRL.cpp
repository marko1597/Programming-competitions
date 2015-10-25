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

int fun( int n ){
    if( n == 0 )
        return 0;
    return fun( n / 5 ) + n / 5;
}
int main(){
    int t, n;
    scanf("%d", &t);
    while( t-- ){
        scanf("%d", &n);
        printf("%d\n", fun( n ));
    }
}
