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
	int n,nar,a,b,p;
	map<int,int>ucenik;
	while(true){
		scanf("%d",&nar);
		if(nar==0){
			scanf("%d %d",&n,&p);
			ucenik.clear();
		}else if(nar==1){
			scanf("%d %d",&a,&b);
			ucenik[a]+=b;
		}else if(nar==2){
			scanf("%d",&a);
			printf("%d\n",ucenik[a]+p);
		}else if(nar==3){
			break;
		}
	}
}
