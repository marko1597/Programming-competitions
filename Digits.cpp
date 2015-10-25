#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main(){
	int n,k,z=0,b=0;
	string digit;
	scanf("%d %d",&n,&k);
	int c=-1;
	while(c<n){
		c+=1;
	    int suma = 0, x = c;
		while( x > 0 ){ 
			z += x%10;
			x /= 10;
		}
		if(z==k){
	 	    b+=1;
	 	}
	 	z=0;
	}
	printf("%d",b);
}
