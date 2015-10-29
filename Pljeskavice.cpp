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

#define MAXN 100000
typedef long long llint;


llint n, m;
llint P[MAXN];
inline llint broj_pljeskavica( llint vrijeme ) {
	llint ispeceno = 0;
	for (int i = 0; i < n; i++)
		ispeceno += vrijeme / P[i];
	return ispeceno;
}
int dosta(llint vrijeme, llint pljeskavica) {
	return pljeskavica <= broj_pljeskavica(vrijeme);
}
llint bs(llint pljeskavica) {
	llint lo = 0, hi, mid;
	for( int i = 0; i < n; i++ )
        hi = max(hi, P[i]*pljeskavica);
	while (lo < hi) {
		mid = (hi + lo) / 2ll;
		if (!dosta(mid, pljeskavica)) {
			lo = mid+1;
		}
		else {
			hi = mid;
		}
	}
	return lo;
}
int main()
{
	scanf("%lld %lld", &n, &m);

	for (int i = 0; i < n; i++)
		scanf("%lld", P+i);

	printf("%lld\n", bs(m));
}

