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

char niz[200][1000];
char red[1000];
map<string,int>po;
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int x=0;x<n;x++)
		scanf("%s",niz[x]);
	for(int x=0;x<m;x++){
		scanf("%s",red);
		po[red]++;
	}
	for(int x=0;x<n;x++){
		printf("%d\n",po[niz[x]]);
	}
}
