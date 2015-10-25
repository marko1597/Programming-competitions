#include <cstdio>
#include <cstring>
#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <time.h>
#include <string.h>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
using namespace std;

bool niz[200][200];
char ul[200];
int main(){
	int n,m,a,b;
	scanf("%d %d",&n,&m);
	for(int x=0;x<n;x++){
		scanf("%s",ul);
		for(int y=0;y<m;y++)
			niz[x][y]=ul[y]=='#';
	}
	for(int x=0;x<n;x++)
		for(int y=0;y<m;y++)
			niz[2*n-1-x][y]=niz[x][y];
	for(int x=0;x<n*2;x++)
		for(int y=0;y<m;y++)
			niz[x][2*m-1-y]=niz[x][y];
	scanf("%d %d",&a,&b);
	niz[a-1][b-1]=!niz[a-1][b-1];
	for(int x=0;x<n*2;x++){
		for(int y=0;y<m*2;y++)
			if(niz[x][y])
				putchar('#');
			else
				putchar('.');
		putchar('\n');
	}
}
