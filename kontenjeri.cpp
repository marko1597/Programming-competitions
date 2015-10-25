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
	int a,b,c,d,e,f,g,h,i,ans=999999999;
	scanf("%d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i);
	ans=min(ans,a+b+e+f+g+i);
	ans=min(ans,a+b+d+f+h+i);
	ans=min(ans,a+c+d+e+h+i);
	ans=min(ans,a+c+e+f+g+h);
	ans=min(ans,b+c+d+e+g+i);
	ans=min(ans,b+c+d+f+g+i);
	printf("%d\n",ans);
}
