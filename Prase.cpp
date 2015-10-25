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

int main(){
	int n;
	char niz[105][105];
	scanf("%d",&n);
	int ret=0;
	for(int x=0;x<n;x++){
		scanf("%s",niz[x]);
		int br=0;
		for(int y=0;y<x;y++)
			br+=!strcmp(niz[x],niz[y]);
		if(br>x-br)
			++ret;
	}
	printf("%d\n",ret);
}
