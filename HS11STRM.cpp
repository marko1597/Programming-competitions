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

char s1[5000000],s2[5000000];
bool bio[5000000];
int main(){
	int t,l;
	scanf("%d",&t);
	while(t--){
		stack<int> sl[26];
		memset(bio,0,sizeof bio);
		scanf("%s %s",s1,s2);
		l=strlen(s1);
		for(int x=l-1;x>=0;x--)
			sl[(int)s1[x]-'a'].push(x);
		l=strlen(s2);
		for(int x=0;x<l;x++)
			if(!sl[s2[x]-'a'].empty()){
				bio[sl[s2[x]-'a'].top()]=1;
				sl[s2[x]-'a'].pop();
			}
		l=strlen(s1);
		for(int x=0;x<l;x++)
			if(!bio[x])
				putchar(s1[x]);
		putchar('\n');
	}
}
