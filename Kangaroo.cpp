#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string.h>
#include <algorithm>
#include <queue>
using namespace std;

typedef unsigned long long llint;

int main(){
	llint n;
	scanf("%llu",&n);
	printf("%llu\n",(n+1)*n+n+1);
}
