#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;


int main()
{
 	unsigned long long a,m,n,c=1,z=1;
	scanf("%llu %llu %llu",&a,&n,&m);
	for(int x=0;x<n;x++){
		c*=a,z+=c;
	}
	printf("%d\n",(z%m));
}
