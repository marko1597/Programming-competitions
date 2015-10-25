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

char rjec[200];
char sl[8][5]={"c=","c-","dz=","d-","lj","nj","s=","z="};
bool cmp(int a,int b){
	int bb=0;
	for(int x=a;x<a+strlen(sl[b]);x++){
		if(rjec[x]!=sl[b][bb++])return 0;
	}
	return 1;
}
int main(){
	int ans=0,p=1;
	scanf("%s",rjec);
	for(int x=0;x<strlen(rjec);x+=p){
		p=1;
		for(int y=0;y<8;y++){
			if(cmp(x,y)){
				p=strlen(sl[y]);
				break;
			}
		}
		ans++;
	}
	printf("%d\n",ans);
}
