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

char polje[500][500];
int main(){
	int r,s,zr,zs;
	scanf("%d %d %d %d",&r,&s,&zr,&zs);
	for(int x=0;x<r;x++)
		scanf("%s",polje[x]);
	for(int x=0;x<r;x++)
		for(int xx=0;xx<zr;xx++){
			for(int y=0;y<s;y++)
				for(int yy=0;yy<zs;yy++)
					putchar(polje[x][y]);
			putchar('\n');
		}
}
