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

int main(){
    llint a, b, k, p1;
    scanf("%lld %lld %lld", &a, &b, &k);
    if( a/k < 1.0*a/k)
        p1 = a/k +1;
    else
        p1 = a/k;
    if( b - p1*k < 0 )
        printf("0\n");
    else
        printf("%lld\n", (b-p1*k)/k+1 );
}
