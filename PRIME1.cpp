#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

#define S 32000
int P[S];

vector<int> prime;

void sieve(){
	for (int i = 0; i < S; i++)
		P[i] = 1;
	P[0] = P[1] = 0;
	for (int i = 0; i < S; i++)
		if (P[i])
			for (int j = 2 * i; j < S; j += i)
				P[j] = 0;
	for (int i = 0; i < S; i++)
		if (P[i])
			prime.push_back(i);
}
int check(long n){
	if (n < S)
		return P[n];
	for (int i = 0; i < prime.size(); i++){
		if (n % prime[i] == 0)
			return 0;
	}
	return 1;
}

int main(){
   	sieve();
	int t;
	long n, m;
	scanf("%d", &t);
	while (t--){
		scanf("%ld %ld", &n, &m);
		for (int i = n; i <= m; i++ )
			if (check(i))
				printf("%d\n", i);
		putchar('\n');
	}
}
