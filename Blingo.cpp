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


class Fenwick {
public:
	Fenwick() {

	}
	Fenwick( int size ) {
		a.reserve(size+20);
		for( int i = 0; i < size; i++ )
            a.push_back(0);
	}
	void Set( int x, int val ) {
		x++;
		for (int i = x; i < a.size(); i += i&-i)
			a[i] += val;
	}
	int GetSum( int x ) {
		x++;
		int sum = 0;
		for (int i = x; i > 0; i -= i&-i)
			sum += a[i];
		return sum;
	}
private:
	vector<int> a;
};

class Blingo {
public:
	Blingo(int size) {
		fen = Fenwick(size);
	}
	void u(int X) {
		fen.Set(X, 1);
	}
	int f(int x, int ima, int treba) {
		return fen.GetSum(x) - ima < treba;
	}
	int n(int A, int B, int K) {
		if (fen.GetSum(B) - fen.GetSum(A - 1) < K)
			return -1;
		int ima = fen.GetSum(A - 1);
		int lo = A, hi = B, mid;
		while (lo < hi) {
			mid = (lo + hi) / 2;
			if (f(mid, ima, K))
				lo = mid + 1;
			else
				hi = mid;
		}
		if(fen.GetSum(lo) - fen.GetSum(lo - 1) > 0)
			return lo;
		return -1;
	}
private:
	Fenwick fen;
};

int main()
{
	int n, k, a, b, c;
	char in[20];
	scanf("%d", &n);
	Blingo app = Blingo(5e6);
	for (int i = 0; i < n; i++) {
		scanf("%s", in);
		if (in[0] == 'u') {
			scanf("%d", &a);
			app.u(a);
		} else {
			scanf("%d %d %d", &a, &b, &c);
			int t = app.n(a, b, c);
			if (t != -1)
				printf("%d\n", t);
			else
				printf("NEMA\n");
		}
	}
}
