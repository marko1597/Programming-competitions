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
	scanf("%d",&n);
	vector<int>value(n+2,0),prev(n+2),next(n+2);
	for(int x=2;x<=n;x++){
		prev[x]=x-1;
		next[x]=x+1;
	}
	for(int x=2;x*x<=n;x=next[x]){
		for(int y=prev[n/x+1];y>=x;y=prev[y]){
			value[x*y]=x;
			next[prev[x*y]]=next[x*y];
			prev[next[x*y]]=prev[x*y];
		}
	}
	prev.~vector();
	next.~vector();
	for(int x=2;x<=n;x++)
		if(!value[x])
			printf("%11d ",x);
	putchar('\n');
	system("pause");
}
