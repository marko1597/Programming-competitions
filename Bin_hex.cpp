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

struct st{
	int p;
	char niz[200000];
	void init(){
		p=0;
	}
	void push(int n){
		niz[p++]=n;
	}
};
char intc(int n){
	if(n==0)return '0';
	if(n==1)return '1';
	if(n==2)return '2';
	if(n==3)return '3';
	if(n==4)return '4';
	if(n==5)return '5';
	if(n==6)return '6';
	if(n==7)return '7';
	if(n==8)return '8';
	if(n==9)return '9';
	if(n==10)return 'a';
	if(n==11)return 'b';
	if(n==12)return 'c';
	if(n==13)return 'd';
	if(n==14)return 'e';
	if(n==15)return 'f';
}
char niz[200000];
int s;
st ans;
void pretvori(int start){
	int p=start,n=0;
	while(p<s){
		n=0;
		for(int x=0;x<4;x++){
			n=n*2+niz[p]-'0';
			p++;
		}
		ans.push(intc(n));
	}
}
int main(){
	int p=0;
	ans.init();
	scanf("%s",niz);
	s=strlen(niz);
	if(s%4==0){
		pretvori(0);
	}else{
		int ss=0;
		for(int x=0;x<s%4;x++){
			ss=ss*2+niz[p]-'0';
			p++;
		}
		ans.push(intc(ss));
		pretvori(s%4);
	}
	printf("%s\n",ans.niz);
}
