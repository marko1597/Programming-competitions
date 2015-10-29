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

const int maxn = 10;

int r, s, k;
char polje[maxn][maxn + 1];
void nula() {
	for (int i = 0; i < r; i++)
		printf("%s\n", polje[i]);
}
void razmaci(int n) {
	for (int i = 0; i < n; i++)
		putchar(' ');
}
void red(int pr, int ps, int sr, int ss) {
	 do{
		putchar(polje[pr][ps]);
		putchar(' ');
		pr += sr;
		ps += ss;
	}while (pr < r && pr >= 0 && ps < s && ps >= 0);
	putchar('\n');
}
int debljina(int pr, int ps, int sr, int ss) {
	int ans = 0;
	do {
		ans++;
		pr += sr;
		ps += ss;
	} while (pr < r && pr >= 0 && ps < s && ps >= 0);
	return ans;
}
void jedan() {
	int kk = r - debljina(0, 0, -1, 1);
	for (int i = 0; i < r-1; i++) {
		razmaci(kk--);
		red(i, 0, -1, 1);
	}
	for (int j = 0; j < s; j++) {
		razmaci(kk++);
		red(r-1, j, -1, 1);
	}
}
void dva() {
	for (int j = 0; j < s; j++) {
		for (int i = 0; i < r; i++)
			putchar(polje[r - 1 - i][j]);
		putchar('\n');
	}
}
void tri() {
	int kk = s-1;
	for (int j = 0; j < s; j++) {
		razmaci(kk--);
		red(r - 1, j, -1, -1);
	}
	kk = 1;
	for (int i = r-1-1; i >= 0; i--) {
		razmaci(kk++);
		red(i, s-1, -1, -1);
	}

}
void cetiri() {
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < s; j++)
			putchar(polje[r - 1 - i][s - 1 - j]);
		putchar('\n');
	}
}
void pet() {
	int kk = r - debljina(r-1, s - 1, 1, -1);
	for (int i = r-1; i > 0; i--) {
		razmaci(kk--);
		red(i, s-1, 1, -1);
	}
	for (int j = s-1; j >= 0; j--) {
		razmaci(kk++);
		red(0, j, 1, -1);
	}
}
void sest() {
	for (int j = 0; j < s; j++) {
		for (int i = 0; i < r; i++)
			putchar(polje[i][s - 1 - j]);
		putchar('\n');
	}
}
void sedam() {
	int kk = s - 1;
	for (int j = s-1; j >= 0; j--) {
		razmaci(kk--);
		red(0, j, 1, 1);
	}
	kk = 1;
	for (int i = 1; i < r; i++) {
		razmaci(kk++);
		red(i, 0, 1, 1);
	}
}
int main(){
	scanf("%d %d", &r, &s);
	for (int i = 0; i < r; i++)
		scanf("%s", polje[i]);
	scanf("%d", &k);
	k %= 8;
	if (k == 0)
		nula();
	else if (k == 1)
		jedan();
	else if (k == 2)
		dva();
	else if (k == 3)
		tri();
	else if (k == 4)
		cetiri();
	else if (k == 5)
		pet();
	else if (k == 6)
		sest();
	else if (k == 7)
		sedam();
}
