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
#include <time.h>
#include <string.h>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
using namespace std;

int niz[1000000];
int main(){
   	int n,i,a=0,b=0;
	scanf("%d %d",&n,&i);
	i--;
	for(int x=0;x<n;x++)
		scanf("%d",niz+x);
	for(int x=0;x<n;x++)
		if(niz[x]<=niz[i])
			a++;
		else
			b++;
	if(a==0)
		printf("%d %d",int(log10(b*1.0)/log10(2.0)),int(log10(b*1.0)/log10(2.0)));
	printf("%d %d",0,int(log10(a*1.0)/log10(2.0)));
}
