#include <cstdio>
#include <iostream>
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
using namespace std;

int main(){
	int n,k;
	vector<int>nizs,nizl,nizk,nizd;
	string a,ans;
	scanf("%d %d",&n,&k);
	for(int x=0;x<n;x++){
	    cin >> a;
	    if(a[0]=='S'){
			if(a.size()==3){
				nizs.push_back(10);
			}else if(a[1]=='A'){
				nizs.push_back(14);
			}else if(a[1]=='K'){
				nizs.push_back(13);
			}else if(a[1]=='Q'){
				nizs.push_back(12);
			}else if(a[1]=='J'){
				nizs.push_back(11);
			}else{
				nizs.push_back(a[1]-'0');
			}
		}
		if(a[0]=='L'){
			if(a.size()==3){
				nizl.push_back(10);
			}else if(a[1]=='A'){
				nizl.push_back(14);
			}else if(a[1]=='K'){
				nizl.push_back(13);
			}else if(a[1]=='Q'){
				nizl.push_back(12);
			}else if(a[1]=='J'){
				nizl.push_back(11);
			}else{
				nizl.push_back(a[1]-'0');
			}
		}
		if(a[0]=='K'){
			if(a.size()==3){
				nizk.push_back(10);
			}else if(a[1]=='A'){
				nizk.push_back(14);
			}else if(a[1]=='K'){
				nizk.push_back(13);
			}else if(a[1]=='Q'){
				nizk.push_back(12);
			}else if(a[1]=='J'){
				nizk.push_back(11);
			}else {
				nizk.push_back(a[1]-'0');
			}
		}
		if(a[0]=='D'){
			if(a.size()==3){
				nizd.push_back(10);
			}else if(a[1]=='A'){
				nizd.push_back(14);
			}else if(a[1]=='K'){
				nizd.push_back(13);
			}else if(a[1]=='Q'){
				nizd.push_back(12);
			}else if(a[1]=='J'){
				nizd.push_back(11);
			}else{
				nizd.push_back(a[1]-'0');
			}
		}
	}
	sort(nizs.begin(),nizs.end());
	sort(nizl.begin(),nizl.end());
	sort(nizk.begin(),nizk.end());
	sort(nizd.begin(),nizd.end());
	if(k<=nizs.size()){
		ans+="S";
		if(nizs[k-1]==10){
			ans+="10";
		}else if(nizs[k-1]==14){
			ans+="A";
		}else if(nizs[k-1]==13){
			ans+="K";
		}else if(nizs[k-1]==12){
			ans+="Q";
		}else if(nizs[k-1]==11){
			ans+="J";
		}else{
			ans+=nizs[k-1]+'0';
		}
		printf("%s\n",ans.c_str());
	}else if(k<=nizs.size()+nizl.size()){
		ans+="L";
		if(nizl[k-1-nizs.size()]==10){
			ans+="10";
		}else if(nizl[k-1-nizs.size()]==14){
			ans+="A";
		}else if(nizl[k-1-nizs.size()]==13){
			ans+="K";
		}else if(nizl[k-1-nizs.size()]==12){
			ans+="Q";
		}else if(nizl[k-1-nizs.size()]==11){
			ans+="J";
		}else{
			ans+=nizl[k-1-nizs.size()]+'0';
		}
		printf("%s\n",ans.c_str());
	}else if(k<=nizs.size()+nizl.size()+nizk.size()){
		ans+="K";
		if(nizk[k-1-nizs.size()-nizl.size()]==10){
			ans+="10";
		}else if(nizk[k-1-nizs.size()-nizl.size()]==14){
			ans+="A";
		}else if(nizk[k-1-nizs.size()-nizl.size()]==13){
			ans+="K";
		}else if(nizk[k-1-nizs.size()-nizl.size()]==12){
			ans+="Q";
		}else if(nizk[k-1-nizs.size()-nizl.size()]==11){
			ans+="J";
		}else{
			ans+=nizk[k-1-nizs.size()-nizl.size()]+'0';
		}
		printf("%s\n",ans.c_str());
	}else if(k<=nizs.size()+nizl.size()+nizk.size()+nizd.size()){
		ans+="D";
		if(nizd[k-1-nizs.size()-nizl.size()-nizk.size()]==10){
			ans+="10";
		}else if(nizd[k-1-nizs.size()-nizl.size()-nizk.size()]==14){
			ans+="A";
		}else if(nizd[k-1-nizs.size()-nizl.size()-nizk.size()]==13){
			ans+="K";
		}else if(nizd[k-1-nizs.size()-nizl.size()-nizk.size()]==12){
			ans+="Q";
		}else if(nizd[k-1-nizs.size()-nizl.size()-nizk.size()]==11){
			ans+="J";
		}else{
			ans+=nizd[k-1-nizs.size()-nizl.size()-nizk.size()]+'0';
		}
		printf("%s\n",ans.c_str());
	}
}
