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

int main(){
	string ans="~";
	string ulaz;
	cin >> ulaz;
	string a,b,c;
	int l=ulaz.length();
	for(int x=1;x<l;x++)
		for(int y=x+1;y<l;y++){
			a=ulaz.substr(0,x);
			b=ulaz.substr(x,y-x);
			c=ulaz.substr(y);
			reverse(a.begin(),a.end());
			reverse(b.begin(),b.end());
			reverse(c.begin(),c.end());
			string p=a+b+c;
			if(ans>p)ans=p;
		}
	printf("%s\n",ans.c_str());
}
