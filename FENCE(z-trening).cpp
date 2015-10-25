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

const double PI=3.14159265358979323846;
int main(){
	double n;
	while(1){
		scanf("%lf",&n);
		if(!n)
			break;
		printf("%.2lf\n",(n/PI)*(n/PI)*PI/2);
	}
}
