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

priority_queue<int>bc,cb;
int main(){
	int n,ans=0,cc=0,bb=0;
	char niz[500],a,b;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%s",niz);
		a=niz[0];
		b=niz[strlen(niz)-1];
		if(a=='B' && b=='C')
			bc.push(strlen(niz));
		if(a=='C' && b=='B')
			cb.push(strlen(niz));
		if(a=='B' && b=='B')
			bb+=strlen(niz);
		if(a=='C' && b=='C')
			cc+=strlen(niz);
	}
	if(!bc.empty() || !cb.empty())
		ans+=bb+cc;
	else
		ans+=max(bb,cc);
	while(!bc.empty() && !cb.empty()){
		ans+=bc.top()+cb.top();
		bc.pop();
		cb.pop();
	}
	ans+=max(bc.empty()?0:bc.top(),cb.empty()?0:cb.top());
	printf("%d\n",ans);
}
