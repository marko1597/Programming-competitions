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

int gcd(int a,int b){
	if(b==0)return a;
	gcd(b,a%b);
}
int main(){
	int n,t,z,g;
	scanf("%d %d",&n,&t);
	n--;
	for(int x=0;x<n;x++){
		scanf("%d",&z);
		g=gcd(t,z);
		printf("%d/%d\n",t/g,z/g);
	}
}
