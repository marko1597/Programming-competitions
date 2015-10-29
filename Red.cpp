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

set<int> red;
set<int>::iterator i1, i2, prvi, drugi;

void ispisi(int l, int r) {
	if (l == -1) {
		printf("* ");
	}
	else {
		printf("%d ", l);
	}
	if (r == -1) {
		printf("*\n");
	}
	else {
		printf("%d\n", r);
	}
}

void izbaci_segment(int l, int r) {
	int ll, rr;
	i1 = red.lower_bound(l);
	i2 = red.upper_bound(r);

	if (i1 == red.begin()) {
		ll = -1;
	}
	else{
		prvi = i1;
		prvi--;
		ll = *prvi;
	}
	if (i2 == red.end()) {
		rr = -1;
	}
	else {
		drugi = i2;
		rr = *drugi;
	}
	red.erase(i1, i2);

	ispisi(ll, rr);
}
int main(){
	int n, k, l, r;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++)
		red.insert(i + 1);
	for (int i = 0; i < k; i++) {
		scanf("%d %d", &l, &r);
		izbaci_segment(l, r);
	}
}
