#include <cstdio>
#include <cstring>
#include <iostream>
#include <math.h>
#include <cmath>
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
unsigned long s,d,t;
    scanf("%lu",&t);
    while(t--)
    {
        scanf("%lu%lu",&s,&d);
        if(s<d||(s+d)&1)printf("impossible\n");
        else printf("%lu %lu\n",(s+d)>>1,(s-d)>>1);
    }
}
