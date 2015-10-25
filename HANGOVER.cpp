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

double sol[999];
int find(double n){
	for (int i = 0; i < 290; i++ )
		if (n < sol[i])
			return i;
}
int main(){
	double sum = 0, i = 2;
	while (i < 999){
		sol[int(i - 2)] = sum;
		sum += 1.0 / i;
		i++;
	}
	for (int i = 0; i < 997; i++)
		sol[i] = round(sol[i] * 100) / 100.0;
	double n;
	while (scanf("%lf", &n) >= 1){
		printf("%d card(s)\n", find(n));
	}
}
