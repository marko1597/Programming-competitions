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

int main(){
	int n,m,j,pos=1,p,ans=0;
	scanf("%d %d %d",&n,&m,&j);
	for(int x=0;x<j;x++){
		scanf("%d",&p);
			if(!(p>=pos && p<=pos-1+m)){
				if(p>pos){
					ans+=p-pos-m+1;
					pos+=p-pos-m+1;
				}else if(p<pos){
					ans+=pos-p;
					pos=p;
				}
			}
	}
	printf("%d\n",ans);
}
