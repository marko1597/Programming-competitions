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
	int n,l,t,r,g,ans=0;
	scanf("%d %d",&n,&l);
	for(int x=0;x<n;x++){
		scanf("%d %d %d",&t,&r,&g);
		if(t%(r+g)!=0 && (t+ans)%(r+g)<=r){
			ans+=r-(t+ans)%(r+g);
		}
	}
	printf("%d\n",ans+l);
}
