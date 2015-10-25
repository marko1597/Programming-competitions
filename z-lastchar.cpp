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
typedef long double lld;

char ul[5000];
int main(){
	llint a,b;
	scanf("%s %lld",ul,&a);
	a*=strlen(ul);
	b=log10(lld(a))/log10(2.0);
	b=pow(2.0,lld(b))-1;
	b%=strlen(ul);
	printf("%c\n",ul[b]);
}
