#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <iomanip>

using namespace std;


int main()
{
	int n,s,r;
	r=0;
	scanf("%d %d",&n,&s);
	for(int i=0;i<sqrt(float(s));i++){
	    if(i*i<s){
            r+=1;
	    }
	}
	cout << r;
}
