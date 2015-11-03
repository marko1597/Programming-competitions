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
		a = vector<int>(size+1, 0);
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

class RussianApp {
public:
	RussianApp(int size) {
		f = Fenwick(size);
	}
	void posadka(int I, int M) {
		f.Set(I, M);
	}
	void razgruzka(int I, int M) {
		f.Set(I, -min(M, f.GetSum(I)-f.GetSum(I-1)));
	}
	int kontora(int Q, int W) {
		return f.GetSum(W) - f.GetSum(Q-1);
	}
private:
	Fenwick f;
};


int main()
{
	int n, k, a, b;
	char in[20];
	scanf("%d %d", &n, &k);
	RussianApp app = RussianApp(n);
	for (int i = 0; i < k; i++) {
		scanf("%s", in);
		if (in[0] == 'p') {
			scanf("%d %d", &a, &b);
			app.posadka(a, b);
		} else if (in[0] == 'r') {
			scanf("%d %d", &a, &b);
			app.razgruzka(a, b);
		} else {
			scanf("%d %d", &a, &b);
			printf("%d\n", app.kontora(a, b));
		}
	}
    return 0;
}

