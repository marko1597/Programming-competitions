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

#define MAXN 1000000
typedef long long llint;

llint n, p;
llint A[MAXN];
llint dosta(llint granica, llint potrebno) {
	llint suma = 0;
	for (int i = 0; i < n; i++)
		suma += max(0ll, A[i] - granica);
	return potrebno <= suma;
}

llint granica(llint potrebno) {
	llint m = 0, mid;
	for (int i = 0; i < n; i++)
		m = max(m, A[i]);
	llint lo = 0, hi = m;
	while (lo < hi) {
		mid = (lo + hi + 1) / 2;
		if (dosta(mid, potrebno))
			lo = mid;
		else
			hi = mid-1;
	}
	return lo;
}
int main(){
	scanf("%lld %lld", &n, &p);

	for (int i = 0; i < n; i++)
		scanf("%lld", A+i);

	printf("%lld\n", granica(p));
}
