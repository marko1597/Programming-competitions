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

typedef long long llint;
int n,m;
llint mem[30][30];
llint rek(int a,int b){
	if(mem[a][b]!=-1)return mem[a][b];
	if(a==n && b==m)return 1;
	if(a>n || b>m)return 0;
	if(a<b)return 0;
	return mem[a][b]=rek(a+1,b)+rek(a,b+1);
}
int main(){
	memset(mem,-1,sizeof mem);
	scanf("%d %d",&n,&m);
	printf("%lld\n",rek(0,0));
}
