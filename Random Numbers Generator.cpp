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

int n=40,b,c;
int main(){
    scanf("%d %d %d",&n,&b,&c);
    srand(time(0));
    int a;
    for(int x=0;x<n;x++){
        do{
            a=rand();
        }while(!(a>=b && a<=c));
        printf("%d\n",a);
    }
    
}
