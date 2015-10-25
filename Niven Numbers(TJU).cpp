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

char znam[100000];
int main(){
	while(1){
		int b,pot=1,sum=0,br=0;
		scanf("%d",&b);
		if(!b)break;
		scanf("%s",znam);
		for(int x=0;x<strlen(znam);x++)
			sum+=znam[x]-'0';
		for(int x=strlen(znam)-1;x>=0;x--){
			br+=pot*(znam[x]-'0');
			pot*=b;
			br%=sum;
			pot%=sum;
		}
		if(!br)
			printf("yes\n");
		else
			printf("no\n");
	}
}
