#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <iomanip>

using namespace std;

string convertInt(int number){
   stringstream ss;
   ss << number;
   return ss.str();
}

int main()
{
	int a,b,c,t;
	string s;
	scanf("%d",&t);
	for(int x=0;x<t;x++){
	    scanf("%d %d",&a,&b);
	    c=int(sqrt(a*a+b*b));
	    if(c*c==a*a+b*b){
 		    s+="YES "+convertInt(c)+"\n";
	    }else{
			 s+= "NO\n";
		}
	}
	cout << s;
}

