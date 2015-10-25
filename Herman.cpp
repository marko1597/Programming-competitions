#include <cstdio>
#include <stdlib.h>
#include <iostream>
#include <string>

int main(){
	double r;
	const double pi=3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
	scanf("%lf",&r);
	printf("%.6lf\n%.6lf\n",r*r*pi,2*r*r);
}
