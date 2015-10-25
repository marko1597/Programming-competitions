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

int main(){
	int n,b,s;
	char rje[500];
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d %s",&b,rje);
		b--;
		s=strlen(rje);
		printf("%d ",x+1);
		for(int y=0;y<s;y++){
			if(y!=b)printf("%c",rje[y]);
		}
		printf("\n");
	}
}
