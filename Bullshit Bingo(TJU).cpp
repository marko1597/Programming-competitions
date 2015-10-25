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

char in;
string p;
set<string>mm;
int gcd(int a,int b){
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main(){
	int ans=0,igar=0,g,x=0;
	while(scanf("%c",&in)==1){
		if(isalpha(in)){
			p.push_back(in);
		}else if(!isalpha(in) && p!=""){
			if(p=="BULLSHIT"){
					igar++;
					ans+=mm.size();
					p.clear();
					mm.clear();
					continue;
			}
			for(int xx=0;xx<p.size();xx++)
				p[xx]=tolower(p[xx]);
			mm.insert(p);
			p.clear();
		}
	}
	g=gcd(ans,igar);
	ans/=g;
	igar/=g;
	printf("%d / %d\n",ans,igar);
}
