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

int ans[10][10]={{0,4,3,4,3,2,3,2,1,2},
				{4,0,1,2,1,2,3,2,3,4},
				{3,1,0,1,2,1,2,3,2,3},
				{4,2,1,0,3,2,1,4,3,2},
				{3,1,2,3,0,1,2,1,2,3},
				{2,2,1,2,1,0,1,2,1,2},
				{3,3,2,1,2,1,0,3,2,1},
				{2,2,3,4,1,2,3,0,1,2},
				{1,3,2,3,2,1,2,1,0,1},
				{2,4,3,2,3,2,1,2,1,0}};
int main(){
	int prijasnji=5,v,ret=0;
	char n[20];
	scanf("%s",&n);
	v=strlen(n);
	for(int x=0;x<v;x++){
		ret+=ans[prijasnji][n[x]-'0'];
		prijasnji=n[x]-'0';
	}
	printf("%d\n",ret);
}
