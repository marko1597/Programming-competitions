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

const int M=500000;
char c1[M],c2[M];
int main(){
	int p=0;
	while(scanf("%s %s",c1,c2)>=2){
		for(int x=0;x<strlen(c2);x++)
			if(c1[p]==c2[x])
				p++;
		if(p==strlen(c1))
			printf("Yes\n");
		else
			printf("No\n");
		p=0;
	}
}
