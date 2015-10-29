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


const int MAX_N = 1005;

char polje[MAX_N][MAX_N];

int check(int px, int py, int w, int h, int n) {
	if (px + h > n || py + w > n)
		return 0;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
			if (polje[i + px][j + py] == '#' || polje[i + px][j + py] == 'D')
				return 0;
	return 1;
}
int main()
{
	int n, w, h, ans = 0;
	scanf("%d %d %d", &n, &w, &h);
	for (int i = 0; i < n; i++)
		scanf("%s", &polje[i]);
	for (int i = 0; i < n; i += h)
		for (int j = 0; j < n; j += w)
			ans += check(i, j, w, h, n);
	printf("%d\n", ans);}

