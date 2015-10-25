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

int X[500],n;
vector<int>L;
int main(){
	L.push_back(500000);
	scanf("%d",&n);
	for(int x=0;x<n;x++)
		scanf("%d",X+x);
	for(int x=0;x<n;x++){
		int p=lower_bound(L.begin(),L.end(),X[x])-L.begin();
		if(p!=L.end()-L.begin())
			L[p]=min(X[x],L[p]);
		else
			L.push_back(X[x]);
	}
	printf("%d\n",L.size());
}
