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
	llint t, n, tmp, lo, hi, mid;
	scanf("%lld", &t);
	while( t-- ){
		scanf("%lld", &n);
		for( llint x = 1; x < 70000; x += 2 ){
			tmp = 4*n*n*n - x*x - 2*x;
			lo = 1, hi = 70000;
			while( lo < hi ){
				mid = (lo + hi) / 2;
				if( -mid*mid + 2*mid < tmp )
					hi = mid-1;
				else
					lo = mid+1;
			}
			if( tmp == -lo*lo + 2*lo ){
				printf("%lld %lld\n", lo, x);
				break;
			}
			lo--;
			if( tmp == -lo*lo + 2*lo ){
				printf("%lld %lld\n", lo, x);
				break;
			}
			lo+=2;
			if( tmp == -lo*lo + 2*lo ){
				printf("%lld %lld\n", lo, x);
				break;
			}
		}
	}
}
