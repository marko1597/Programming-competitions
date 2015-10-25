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

double a,b,ans,c;
double nz1[101],nz2[101];
int p=0;
double abss(double n){
	if(n<0)
		return -n;
	return n;
}
int main(){
	scanf("%lf %lf",&a,&b);
	nz1[0]=1;
	nz2[0]=1;
	c=1e16;
	for(int x=1;x<101;x++)
		nz1[x]=nz1[x-1]*1.0/3.0;
	for(int x=1;x<101;x++)
		nz2[x]=nz2[x-1]*2.0/3.0;
	for(int x=0;x<=100;x++)
		for(int y=0;y<=100;y++)
			if(abss(b-nz1[x]*nz2[y]*a)<c){
				c=abss(b-nz1[x]*nz2[y]*a);
				ans=nz1[x]*nz2[y]*a;
				p=x+y;
			}
	printf("%d\n%.5lf\n",p,ans);
}
