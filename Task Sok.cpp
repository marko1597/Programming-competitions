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
	int k[3];
	int t[3];
	const double mp=1e-9*-1;
	scanf("%d %d %d",&k[0],&k[1],&k[2]);
	scanf("%d %d %d",&t[0],&t[1],&t[2]);
	double sok=0;
	for(int x=0;x<3;x++){
		double test=1.0*k[x]/t[x];
		if(test>sok)
			if(k[0]-test*t[0]>=mp)
				if(k[1]-test*t[1]>=mp)
					if(k[2]-test*t[2]>=mp)
						sok=test;
	}
	printf("%lf %lf %lf\n",k[0]-t[0]*sok,k[1]-t[1]*sok,k[2]-t[2]*sok);
}
