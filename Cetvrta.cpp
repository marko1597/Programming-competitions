#include <cstdio>
#include <cstring>
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string.h>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main(){
	int a,b;
	int X,Y,mm=50;
	map<int,int>c,d;
	for(int x=0;x<3;x++){
		scanf("%d %d",&a,&b);
		c[a]+=1;
		d[b]+=1;
	}
	for(map<int,int>::iterator x=c.begin();x!=c.end();x++){
		if(mm>x->second){
			X=x->first;
			mm=x->second;
		}
	}
	mm=50;
	for(map<int,int>::iterator x=d.begin();x!=d.end();x++){
		if(mm>x->second){
			Y=x->first;
			mm=x->second;
		}
	}
	printf("%d %d\n",X,Y);
}
