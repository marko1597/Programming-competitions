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
	string a;
	map<string,int>mapa;
	char c;
	while(!feof(stdin)){
		scanf("%c",&c);
		c=tolower(c);
		if(c>='a' && c<='z'){
			a.push_back(c);
		}else{
			if(a=="")continue;
			mapa[a]++;
			a.clear();
		}
	}
	int m=0;
	string ans;
	for(map<string,int>::iterator x=mapa.begin();x!=mapa.end();x++){
		if(x->second>m){
			m=x->second;
			ans=x->first;
		}
	}
	printf("%s %d\n",ans.c_str(),m);
}
