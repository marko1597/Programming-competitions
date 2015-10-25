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

int abss(int a){
	if(a<0)return -a;
	return a;
}
char d[]="Darko";
char m[]="Mirko";
char s[]="Slavko";
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a==b)
		printf("%s %s\n",d,m);
	else if(a==c)
		printf("%s %s\n",d,s);
	else if(b==c)
		printf("%s %s\n",m,s);
	else if(abss(a-b)<abss(b-c) && abss(a-b)<abss(a-c)){
		if(a>b)
			printf("%s %s\n",d,m);
		else
			printf("%s %s\n",m,d);
	}else if(abss(a-c)<abss(b-c) && abss(a-c)<abss(a-b)){
		if(a>c)
			printf("%s %s\n",d,s);
		else
			printf("%s %s\n",s,d);
	}else if(abss(b-c)<abss(a-c) && abss(c-b)<abss(a-b)){
		if(b>c)
			printf("%s %s\n",m,s);
		else
			printf("%s %s\n",s,m);
	}
}
