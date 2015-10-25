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

int main(){
	int  n,h;
	int stalagmit[100000],stalaktit[100000];
	scanf("%d %d",&n,&h);
	for(int x=0;x<n/2;x++){
		scanf("%d %d",stalagmit+x,stalaktit+x);
	}
	sort(stalagmit,stalagmit+n/2);
	sort(stalaktit,stalaktit+n/2);
	n/=2;
	int mm=n-int(lower_bound(stalagmit,stalagmit+n,1)-stalagmit)+n-int(lower_bound(stalaktit,stalaktit+n,h)-stalaktit);
	int br=1,rusim;
	for(int x=2;x<=h;x++){
		rusim=n-int(lower_bound(stalagmit,stalagmit+n,x)-stalagmit)+n-int(lower_bound(stalaktit,stalaktit+n,h-x+1)-stalaktit);
		if(rusim<mm)mm=rusim,br=0;
		if(rusim==mm)br++;
	}
	printf("%d %d\n",mm,br);
}
