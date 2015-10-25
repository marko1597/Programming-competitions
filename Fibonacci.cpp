#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
	long long int a=1,b=1,ans,t;
	int n;
	scanf("%d",&n);
	if(n>0)for(int x=0;x<n-2;x++){
		t=a,a+=b,b=t;
	}else if(n==0){
		a=0;
	}else{
		a=1,b=1;
		for(int x=0;x<n*-1+1;x++)t=a,a=b-a,b=t;
	}
	printf("%lli",a);
}
