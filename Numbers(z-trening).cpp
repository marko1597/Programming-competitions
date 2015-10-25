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
	int n,m;
	scanf("%d",&n);
	vector<int>ans;
	vector<int>::iterator p;
	for(int x=0;x<n;x++){
		scanf("%d",&m);
		p=upper_bound(ans.begin(),ans.end(),m);
		if(p==ans.end())ans.push_back(m);
		else *p=m;
	}
	printf("%d\n",ans.size());
}
