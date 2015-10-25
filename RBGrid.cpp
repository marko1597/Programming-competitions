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

typedef long long llint;
char ploca[1005][1005];
int main(){
	int r,s;
	llint ans=0;
	memset(ploca,0,sizeof ploca);
	scanf("%d %d",&r,&s);
	for(int x=0;x<r;x++){
		scanf("%s",ploca[x]);
	}
	for(int x=1;x<r;x++){
		for(int y=1;y<s;y++){
			if(ploca[x][y]=='B' && ploca[x+1][y]=='B' && ploca[x-1][y]=='B' && ploca[x][y+1]=='B' && ploca[x][y-1]=='B')ans++;
		}
	}
	printf("%lld\n",ans);
}
