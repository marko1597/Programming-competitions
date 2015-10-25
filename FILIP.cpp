#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <iomanip>

using namespace std;


int main()
{
	int n,k,kr,z=0;
	scanf("%d %d",&n,&k);
	for(int c=0,b=0;b<n;b++,c++){
	    scanf("%d",&kr);
	    if(c>k){
            c=0;
		}
	    z+=c*kr;
	}
 	cout << z;
 	system("pause");
}
