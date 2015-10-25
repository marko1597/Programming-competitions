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

int polje[450][450];
int dp1[450][450],dp2[450][450];
int main(){
	int ans=-1073741824;
	memset(dp1,0,sizeof dp1);
	memset(dp2,0,sizeof dp2);
	int n;
	scanf("%d",&n);
	for(int x=1;x<=n;x++)
		for(int y=1;y<=n;y++){
			scanf("%d",&polje[x][y]);
		}
	for(int x=0;x<=n;x++){
		dp1[1][x]=polje[1][x];
		dp2[1][x]=polje[1][x];
		dp2[x][1]=polje[x][1];
	}
	for(int x=2;x<=n;x++){
		dp1[x][1]=polje[x][1];
		for(int y=2;y<=n;y++){
			dp1[x][y]=dp1[x-1][y-1]+polje[x][y];
		}
	}
	for(int x=2;x<=n;x++){
		dp2[x][1]=polje[x][1];
		for(int y=1;y<=n;y++){
			dp2[x][y]=polje[x][y]+dp2[x-1][y+1];
		}
	}
	int a,b;
	for(int x=1;x<n;x++){
		for(int y=1;y<n;y++){
			for(int d=0;d+x-1<n && d+y-1<n;d++){
				a=dp1[x+d][y+d]-dp1[x-1][y-1];
				b=dp2[x+d][y]-dp2[x-1][y+d+1];
				ans=max(ans,a-b);
			}
		}
	}
	printf("%d\n",ans);
}
