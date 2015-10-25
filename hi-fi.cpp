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
	int n,m,br,ans;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		ans=0;
		scanf("%d",&m);
		scanf("%d",&br);
		ans+=br;
		for(int y=1;y<m;y++){
			scanf("%d",&br);
			ans+=br-1;
		}
		printf("%d\n",ans);
	}
}
