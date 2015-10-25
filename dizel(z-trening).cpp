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
	int v,d,c,vb=0,v1;
	scanf("%d %d %d",&v,&d,&c);
	v1=v;
	if(d*2<c){
		if(v>c){
			int b=v/c;
			vb+=b*(c-2*d);
			v-=b*c;
			if(v>d){
				vb+=(v-d);
				v=0;
			}else{
				vb+=d;
			}
		}else{
			if(v>d){
				vb=v-d;
				v=0;
			}
		}
	}
	int v2=0;
	if(d<c){
		if(v1>c){
			v1-=c;
			v2+=c-d;
		}else{
			if(v1>d){
				v2+=v1-d;
				v1=0;
			}
		}
		if(v2>vb || v2==vb && v1>v)
			vb=v2,v=v1;
	}
	printf("%d %d\n",vb,v);
}
