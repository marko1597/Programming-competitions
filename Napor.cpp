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

bool cmp(string a,string b){
	if(a.size()!=b.size())return a.size()<b.size();
	for(int x=0;x<a.size();x++){
		if(a[x]==b[x])continue;
		return a[x]<b[x];
	}
	return false;
}
int main(){
	vector<string>q;
	int n,s;
	string rjec,temm;
	bool br;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		br=false;
		cin>>rjec;
		s=rjec.size();
		for(int x=0;x<s;x++){
			if(isdigit(rjec[x])&&(x==0||!isdigit(rjec[x-1]))){
				temm="";
				for(int y=x;y<s;y++){
					if(!isdigit(rjec[y]))break;
					if(rjec[y]!='0'||temm!="")temm.push_back(rjec[y]);
				}
				if(temm=="")temm="0";
				q.push_back(temm);
			}
		}
	}
	sort(q.begin(),q.end(),cmp);
	s=q.size();
	for(int x=0;x<s;x++){
		printf("%s\n",q[x].c_str());
	}
}
