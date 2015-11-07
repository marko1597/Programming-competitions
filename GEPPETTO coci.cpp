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

const int maxn = 25;
int parovi[maxn][maxn];
int N, M;
int MEM[1 << 21];
int ckeck( int state, int d ) {
	for (int i = 0; i < 21; i++) {
		if (state & (1 << i))
			if (parovi[i][d])
				return 0;
	}
	return 1;
}
int rek(int state = 0, int d = 0) {
	if (d == N)
		return 1;
	if (MEM[state] != -1)
		return MEM[state];

	int res = 0;
	res += rek(state, d + 1);
	if (ckeck(state, d))
		res += rek(state + (1<<d), d +1);

	return MEM[state] = res;
}
int main()
{
	int a, b;
	memset(MEM, -1, sizeof MEM);
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &a, &b);
		parovi[a - 1][b - 1] = 1;
		parovi[b - 1][a - 1] = 1;
	}
	printf("%d\n", rek());
	return 0;
}

