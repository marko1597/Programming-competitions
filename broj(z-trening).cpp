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
	int n,a,ans=0,b=0;
	scanf("%d",&n);
	for(a=1;n/a;a*=10)
		ans+=a*9*++b;
	ans-=(a-n-1)*b;
	printf("%d\n",ans);
}
