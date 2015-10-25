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
	int ans=0;
	pair<int,int>p[8];
	vector<int>q;
	for(int x=0;x<8;x++)
		scanf("%d",&p[x].first),p[x].second=x;
	sort(p,p+8,greater<pair<int,int> >());
	for(int x=0;x<5;x++){
		ans+=p[x].first;
		q.push_back(p[x].second);
	}
	sort(q.begin(),q.end());
	printf("%d\n",ans);
	for(int x=0;x<5;x++)
		printf("%d ",q[x]+1);
	putchar('\n');
}
