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

int abb(int a){
	if(a<0)
		return a*-1;
	return a;
}
int main(){
	int a,b,c,d,ans=0;
	scanf("%d %d",&a,&b);
	c=a/2+a%2;
	d=b/2+b%2;
	if(a%2 != b%2)
		ans++;
	ans+=abb(c-d);
	printf("%d\n",ans);
}
