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
	int n,w,h,l,m;
	scanf("%d %d %d",&n,&w,&h);
	m=sqrt(float(w*w+h*h));
	for(int x=0;x<n;x++){
		scanf("%d",&l);
		if(l>m)
			printf("NE\n");
		else
			printf("DA\n");
	}
}
