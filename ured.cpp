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

#define MAXN (2<<17)

typedef long long llint;
const int offset = MAXN;

const llint INF = 1e18;

llint T[2 * offset];
void fill() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < 2 * offset; i++)
		T[i] = INF;

	for (int x = 0; x < n; x++)
		scanf("%lld", T + x + offset);

	for (int x = offset - 1; x>0; x--) {
		T[x] = T[x * 2];
		T[x] = min(T[x], T[x * 2 + 1]);
	}
}
void update(int i, llint val) {
	i--;
	T[offset + i] = val;
	for (int x = (offset + i) / 2; x > 0; x /= 2) {
		T[x] = T[x * 2];
		T[x] = min(T[x], T[x * 2 + 1]);
	}
}
llint query(int a, int b, int lo = 0, int hi = offset, int p = 1) {

	if (lo >= b || hi <= a)
		return INF;

	if (a <= lo && hi <= b)
		return T[p];

	return min(query(a, b, lo, (lo + hi) / 2, p * 2), query(a, b, (lo + hi) / 2, hi, p * 2 + 1));
}

int main()
{
	fill();
	llint n, a, b;
	char in[20];
	scanf("%lld", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", in);
		if (in[0] == 's') {
			scanf("%lld %lld", &a, &b);
			printf("%lld\n", query(a-1, b));
		} else {
			scanf("%lld %lld", &a, &b);
			update(a, b);
		}
	}
    return 0;
}
