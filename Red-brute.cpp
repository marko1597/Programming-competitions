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

queue<int> ql, qr;

int main(){
	int n, k, l, r, a, b;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++)
		qr.push(i);
	for (int i = 0; i < k; i++) {
		a = -1, b = -1;
		scanf("%d %d", &l, &r);
		while (!qr.empty() && qr.front() < l) {
			a = qr.front();
			ql.push(qr.front());
			qr.pop();
		}
		while (!qr.empty() && qr.front() >= l && qr.front() <= r)
			qr.pop();
		if(!qr.empty())
			b = qr.front();
		while (!qr.empty()) {
			ql.push(qr.front());
			qr.pop();
		}
		while (!ql.empty()) {
			qr.push(ql.front());
			ql.pop();
		}
		if (a == -1)
			printf("* ");
		else
			printf("%d ", a);
		if (b == -1)
			printf("*\n");
		else
			printf("%d\n", b);

	}
}
