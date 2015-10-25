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

char broj[1000000];
int main(){
	int n,p;
	while(1){
		p=0,n=0;
		scanf("%s",broj);
		if(strlen(broj)==1 && broj[0]=='0')break;
		if(strlen(broj)==1)
			printf("%s\n",broj);
		else{
			for(int x=0;x<strlen(broj);x++)
				n+=broj[x]-'0';
			while(n>0){
				p+=n%10;
				n/=10;
				if(n==0 && p/10)
					n=p,p=0;
			}
			printf("%d\n",p);
		}
	}
}
