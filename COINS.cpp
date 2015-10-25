#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <stack>
#include <string>
#include <map>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

typedef long long int llint;

map<llint, llint> R;

llint rek(llint n){
	if (R[n])
		return R[n];
	if (n <= 1)
		return n;
	llint tmp = rek(n / 2) + rek(n / 3) + rek(n / 4);
	if (tmp < n)
		return R[n] = n;
	return R[n] = tmp;
}

int main(){
   	int n;
	while (scanf("%d", &n) >= 1){
		printf("%lld\n", rek(n));
	}
}
