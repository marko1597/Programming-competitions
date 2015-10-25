#include <cstdio>
#include <cstring>
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string.h>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>

using namespace std;

typedef struct Board Board;
struct Board {
	int n;
	char b[15][15];
};
Board rotate(Board b){
	Board nb;
	int r, c;

	nb = b;
	for(r=0; r<b.n; r++)
		for(c=0; c<b.n; c++)
			nb.b[c][b.n-1 - r] = b.b[r][c];

	return nb;
}
Board reflect(Board b)
{
	Board nb;
	int r, c;

	nb = b;
	for(r=0; r<b.n; r++)
		for(c=0; c<b.n; c++)
			nb.b[r][b.n-1 - c] = b.b[r][c];

	return nb;
}
int eqboard(Board b, Board bb)
{
	int r, c;

	if(b.n != bb.n)
		return 0;

	for(r=0; r<b.n; r++)
		for(c=0; c<b.n; c++)
			if(b.b[r][c] != bb.b[r][c])
				return 0;
	return 1;
}
Board rdboard(int n){
	Board b;
	int r, c;

	b.n = n;
	for(r=0; r<n; r++) {
		scanf("%s",b.b[r]);
	}
	return b;
}
int main(){
	Board b, nb;
	int n, change;


	scanf( "%d\n", &n);
	b = rdboard(n);
	nb = rdboard(n);

	if(eqboard(nb, rotate(b)))
		change = 1;
	else if(eqboard(nb, rotate(rotate(b))))
		change = 2;
	else if(eqboard(nb, rotate(rotate(rotate(b)))))
		change = 3;
	else if(eqboard(nb, reflect(b)))
		change = 4;
	else if(eqboard(nb, rotate(reflect(b))) || eqboard(nb, rotate(rotate(reflect(b)))) || eqboard(nb, rotate(rotate(rotate(reflect(b))))))
		change = 5;
	else if(eqboard(nb, b))
		change = 6;
	else
		change = 7;
	printf( "%d\n", change);
}
