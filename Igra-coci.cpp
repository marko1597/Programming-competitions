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

bool cmp(pair<char,int> a,pair<char,int> b){
	if(a.first==b.first)return a.second>b.second;
	return a.first<b.first;
}
bool cmpp(vector<char> &a,vector<char> &b){
	int doo=min(a.size(),b.size());
	for(int x=0;x<doo;x++){
		if(a[x]!=b[x])return a[x]<b[x];
	}
	return a.size()<b.size();
}
char rjec[100005];
pair<char,int>niz[100005];
bool bio[100005];
int n;
struct sl{
	int s;
	void init(){
		s=0;
	}
	char pop(){
		for(int x=s;x<n;x++){
			s=x;
			if(bio[niz[x].second]==false){
				bio[niz[x].second]=true;
				s++;
				return niz[x].first;
			}
		}
	}
};
int main(){
	memset(bio,0,sizeof bio);
	vector<char>slavko;
	vector<char>mirko;
	sl slav;
	slav.init();
	scanf("%d",&n);
	scanf("%s",rjec);
	for(int x=0;x<n;x++){
		niz[x].first=rjec[x];
		niz[x].second=x;
	}
	sort(niz,niz+n,cmp);
	for(int x=n-1;x>=0;x--){
		if(bio[x]==false){
			bio[x]=true;
			mirko.push_back(rjec[x]);
			slavko.push_back(slav.pop());
		}
	}
	if(cmpp(slavko,mirko)){
		printf("DA\n");
	}else{
		printf("NE\n");
	}
	for(int x=0;x<slavko.size();x++){
		printf("%c",slavko[x]);
	}
	printf("\n");
}
