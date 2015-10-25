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
	int n;
	float d,uda=0,br,st,ans=0;
	scanf("%f %d",&d,&n);
	scanf("%f",&st);
	for(int x=0;x<n-1;x++){
		scanf("%f",&br);
		if(br-ans-st<d){
			st=br;
		}else{
			ans+=(br-st-ans-d)/2;
			st=br-ans;
		}
	}
	printf("%.3f\n",ans);
	//system("pause");
}
