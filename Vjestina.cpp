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


const int maxn = 100005;
int zadace[maxn], p, k;
int polje[maxn], razlicith = 0;


int razliciti_proces_dodaj(int z, int n) {
	if (polje[z] == 0)
		razlicith++;
	polje[z] += n;
	return polje[z];
}
int razliciti_proces_brisi(int z, int n) {
	polje[z] -= n;
	if (polje[z] == 0)
		razlicith--;
	return polje[z];
}
int main(){
	int t, tmp, n, j = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		if (razliciti_proces_dodaj(t, 1) == 1)
			zadace[j++] = t;
	}
	p = 0, k = j - 1;
	sort(zadace, zadace + j);
	if (razlicith < 3) {
		printf("Slavko\n%d %d\n", zadace[p], zadace[k]);
		return 0;
	}
	while (razlicith - 2 >= 3) {
		tmp = min(polje[zadace[p]], polje[zadace[k]]);
		razliciti_proces_brisi(zadace[p], tmp);
		razliciti_proces_dodaj(zadace[p + 1], tmp);
		razliciti_proces_brisi(zadace[k], tmp);
		razliciti_proces_dodaj(zadace[k - 1], tmp);
		if (!polje[zadace[p]])
			p++;
		if (!polje[zadace[k]])
			k--;
	}
	if (polje[zadace[p]] != polje[zadace[k]] && razlicith == 4) {
		tmp = min(polje[zadace[p]], polje[zadace[k]]);
		razliciti_proces_brisi(zadace[p], tmp);
		razliciti_proces_dodaj(zadace[p + 1], tmp);
		razliciti_proces_brisi(zadace[k], tmp);
		razliciti_proces_dodaj(zadace[k - 1], tmp);
		if (!polje[zadace[p]])
			p++;
		if (!polje[zadace[k]])
			k--;
	}
	else if(razlicith == 4) {
		printf("Slavko\n%d %d\n", zadace[p+1], zadace[k-1]);
		return 0;
	}
	if (polje[zadace[p]] <= polje[zadace[k]]) {
		printf("Mirko\n%d %d\n", zadace[p + 1], zadace[k]);
	}
	else {
		printf("Slavko\n%d %d\n", zadace[p], zadace[k-1]);
	}
}
