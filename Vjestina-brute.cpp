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
int zadace[maxn], n, p, k;
int polje[maxn], razlicith = 0;

void pobjednik(int igrac) {
	if (igrac == 1) {
		printf("Slavko\n");
	}
	else {
		printf("Mirko\n");
	}
	printf("%d %d\n", zadace[0], zadace[n - 1]);
	exit(0);
}
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
void mirko() {
	int najmanja, najmanjaveca;
	if (razlicith < 3) {
		pobjednik(1);
	}
	najmanja = 0;
	najmanjaveca = upper_bound(zadace, zadace+n, zadace[najmanja]) - zadace;
	razliciti_proces_brisi(zadace[0], 1);
	razliciti_proces_dodaj(zadace[najmanjaveca], 1);
	zadace[najmanjaveca - 1] = zadace[najmanjaveca];
}
void slavko() {
	int najveca, najvecamanja;
	if (razlicith < 3) {
		pobjednik(2);
	}
	najveca = n - 1;
	najvecamanja = lower_bound(zadace, zadace+n, zadace[najveca]) - zadace-1;
	razliciti_proces_brisi(zadace[najveca]);
	razliciti_proces_dodaj(zadace[najvecamanja]);
	zadace[najvecamanja + 1] = zadace[najvecamanja];
}

int main(){
	int t, tmp;
	scanf("%d", &n);
	for (int i = 0, j = 0; i < n; i++) {
		scanf("%d", &t);
		if( razliciti_proces_dodaj(t, 1) == 1)
            zadace[j++] = t;
	}
	p = 0, k = j-1;
	sort(zadace, zadace+k);
	do {
        tmp = min(polje[zadace[p]], polje[zadace[k]]);
		mirko();
		slavko();
	} while (1);
}
