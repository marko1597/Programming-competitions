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

int a,b,c,d,e,f,g,h,i;
void nr(int n){
	if(n==0){
		a+=3,b+=3,d+=3,e+=3;
	}else if(n==1){
		a+=3,b+=3,c+=3;
	}else if(n==2){
		b+=3,c+=3,e+=3,f+=3;
	}else if(n==3){
		a+=3,d+=3,g+=3;
	}else if(n==4){
		b+=3,d+=3,e+=3,f+=3,h+=3;
	}else if(n==5){
		c+=3,f+=3,i+=3;
	}else if(n==6){
		d+=3,e+=3,g+=3,h+=3;
	}else if(n==7){
		g+=3,h+=3,i+=3;
	}else if(n==8){
		e+=3,f+=3,h+=3,i+=3;
	}
	if(a==15)a=3;
	if(b==15)b=3;
	if(c==15)c=3;
	if(d==15)d=3;
	if(e==15)e=3;
	if(f==15)f=3;
	if(g==15)g=3;
	if(h==15)h=3;
	if(i==15)i=3;
}
vector<int>ans,p;
bool isbig(vector<int> &a,vector<int> &b){
	for(int x=0;x<a.size();x++){
		if(a[x]==b[x])continue;
		else return a[x]<b[x];
	}
}
int rek(int n=0){
	if(a==12 && b==12 && c==12 && d==12 && e==12 && f==12 && g==12 && h==12 && i==12){
		if(p.size()<ans.size() || ans.size()==0){
			ans=p;
		}else if(p.size()==ans.size()){
			sort(ans.begin(),ans.end());
			sort(p.begin(),p.end());
			if(isbig(ans,p)==true){
				ans=p;
			}
		}
		return 0;
	}else if(n==9)return 0;
	for(int x=0;x<3;x++){
		nr(n);
		p.push_back(n+1);
		rek(n+1);
	}
	for(int x=0;x<3;x++)
		p.pop_back();
	nr(n);
	rek(n+1);
}
int main(){
	scanf("%d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i);
	rek();
	sort(ans.begin(),ans.end());
	for(int x=0;x<ans.size();x++){
		if(x!=ans.size()-1)printf("%d ",ans[x]);
		else printf("%d\n",ans[x]);
	}
}
