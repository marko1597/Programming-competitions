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

char in[500],cod[500];
int keyn[4][26];
int keyi[4][26];
int plnn[26];
int plni[26];
int tim[4];
void moverotor(){
	tim[0]++;
	if(tim[0]>=26)
		tim[0]=0,tim[1]++;
	if(tim[1]>=26)
		tim[1]=0,tim[2]++;
	if(tim[2]>=26)
		tim[2]=0,tim[3]++;
	if(tim[3]>=26)
		tim[3]=0;
}
int mod(int a,int b=26){
	while(a>=b)
		a-=b;
	return a;
}
char process(int at,char niz[]){
	int ch=niz[at]-'a';
	ch=plnn[ch];
	for(int x=0;x<4;x++)
		ch=mod(keyn[x][mod(tim[x]+ch)]-tim[x]+26);
	for(int x=2;x>=0;x--)
		ch=mod(keyi[x][mod(tim[x]+ch)]-tim[x]+26);
	ch=plni[ch];
	moverotor();
	return ch+'a';
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		memset(tim,0,sizeof tim);
		for(int x=0;x<4;x++){
			scanf("%s",in);
			for(int y=0;y<26;y++){
				if(in[y]=='?')
					continue;
				keyn[x][y]=in[y]-'a';
				keyi[x][in[y]-'a']=y;
			}
		}
		scanf("%s",in);
		for(int y=0;y<26;y++){
			if(in[y]=='?')
				continue;
			plnn[y]=in[y]-'a';
			plni[in[y]-'a']=y;
		}
		scanf("%s",in);
		for(int y=0;y<4;y++)
			tim[y]=in[y]-'a';
		scanf("%s",in);
		scanf("%s",cod);
		for(int x=0;x<strlen(in);x++)
			printf("%c",process(x,in));
	}
}
