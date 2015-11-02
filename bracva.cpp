#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>
#include <stack>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <list>
#include <ctime>
#include <algorithm>

using namespace std;

#define MAXN 3000

double X[MAXN], Y[MAXN];
int n;

inline double kva(double a) {
	return a*a;
}
inline double udaljenost( double x1, double y1, double x2, double y2 ){
	return sqrt(kva(x1 - x2) + kva(y1 - y2));
}
double f(double x, double y) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += udaljenost(x, y, X[i], Y[i]);
	}
	return sum;
}
double g(double x) {
	double lo = 0, hi = 1000;

	while (abs(lo - hi) > 1e-6) {
		double l1 = lo + (hi - lo) / 3;
		double l2 = hi - (hi - lo) / 3;
		if (f(x, l1) > f(x,l2))
			lo = l1;
		else
			hi = l2;
	}

	return f(x ,(lo + hi) / 2);
}
double minimum() {
	double lo = 0, hi = 1000;

	while (abs(lo - hi) > 1e-6) {
		double l1 = lo + (hi - lo) / 3;
		double l2 = hi - (hi - lo) / 3;
		if (g(l1) > g(l2))
			lo = l1;
		else
			hi = l2;
	}

	return g((lo + hi) / 2);
}
int main()
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%lf %lf", X + i, Y + i);


	printf("%lf\n", minimum());
}

