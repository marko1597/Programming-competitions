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

int main(){
	int c,z;
	scanf("%d %d",&c,&z);
	for(int x=1;x*x<c;x++){
		if(c%x==0){
			if(z%x==0)
				printf("%d %d %d\n",x,c/x,z/x);
			if(x*x!=c && c%(z/x)==0)
				printf("%d %d %d\n",c/x,x,z/(c/x));
		}
	}
}
