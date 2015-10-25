#include <cstdio>
//#include <iostream>
//#include <string>
//#include <sstream>
//#include <math.h>
using namespace std;


int main()
{
	int a,i,c=0;
 	scanf("%d",&a);
	c+=1;
	for(i=0;i<a;i++){
		c+=6*i;
	}
	printf("%d\n",c);
}
