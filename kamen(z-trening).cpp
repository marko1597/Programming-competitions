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

vector<int> p[30];
int main(){
	int n,m,b,ans=0;
	char a[4];
	scanf("%d %d",&n,&m);
	for(int x=0;x<n;x++){
		scanf("%s %d",a,&b);
		p[a[0]-'A'].push_back(b);
	}
	for(int x=0;x<30;x++)
		sort(p[x].begin(),p[x].end(),greater<int>());
	for(int x=0;x<m;x++){
		scanf("%s",a);
		if(p[a[0]-'A'].size()==0){
			ans=-1;
			break;
		}
		ans+=p[a[0]-'A'][p[a[0]-'A'].size()-1];
		p[a[0]-'A'].pop_back();
	}
	printf("%d\n",ans);
}
