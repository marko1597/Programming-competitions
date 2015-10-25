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

char polje[1550][1550];
int lx1,ly1,lx2,ly2;
bool l2=false;
bool biol[1550][1550];
bool bio[1550][1550];
int a,b;
queue<pair<short,short> >led;
queue<pair<short,short> >nas;
int sx[]={0,0,1,-1};
int sy[]={1,-1,0,0};
int lbfs(){
	for(int x=0;x<a;x++)
			for(int y=0;y<b;y++)
				biol[x][y]=0;
	biol[lx1][ly1]=true;
	queue<pair<short,short> >q;
	q.push(make_pair(lx1,ly1));
	bool vidi=false;
	while(!q.empty()){
		vidi=false;
		int x=q.front().first,y=q.front().second;
		for(int g=0;g<4;g++){
			if(x+sx[g]<0 || y+sy[g]<0 || x+sx[g]==a || y+sy[g]==b)continue;
			if(polje[x+sx[g]][y+sy[g]]=='X'){
				vidi=true;
				continue;
			}
			if(biol[x+sx[g]][y+sy[g]]==true)continue;
			biol[x+sx[g]][y+sy[g]]=true;
			q.push(make_pair(x+sx[g],y+sy[g]));
		}
		q.pop();
		if(vidi==true)nas.push(make_pair(x,y));
	}
	return 0;
}
int bfs(int x,int y){
	queue<pair<short,short> >q;
	q.push(make_pair(x,y));
	while(!q.empty()){
		int x=q.front().first,y=q.front().second;
		for(int g=0;g<4;g++){
			if(x+sx[g]<0 || y+sy[g]<0 || x+sx[g]==a || y+sy[g]==b)continue;
			if(bio[x+sx[g]][y+sy[g]]==true)continue;
			bio[x+sx[g]][y+sy[g]]=true;
			if(polje[x+sx[g]][y+sy[g]]=='X'){
				led.push(make_pair(x+sx[g],y+sy[g]));
				continue;
			}
			q.push(make_pair(x+sx[g],y+sy[g]));
		}
		q.pop();
	}
	return 0;
}
int sbfs(){
	queue<pair<short,short> >q;
	while(!nas.empty()){
		q.push(nas.front());
		nas.pop();
	}
	bool vidi=false;
	while(!q.empty()){
		vidi=false;
		int x=q.front().first,y=q.front().second;
		for(int g=0;g<4;g++){
			if(x+sx[g]<0 || y+sy[g]<0 || x+sx[g]==a || y+sy[g]==b)continue;
			if(polje[x+sx[g]][y+sy[g]]=='X'){
				vidi=true;
				continue;
			}
			if(biol[x+sx[g]][y+sy[g]]==true)continue;
			biol[x+sx[g]][y+sy[g]]=true;
			q.push(make_pair(x+sx[g],y+sy[g]));
		}
		q.pop();
		if(vidi==true)nas.push(make_pair(x,y));
	}
	return biol[lx2][ly2];
}
int main(){
	scanf("%d %d",&a,&b);
	for(int x=0;x<a;x++){
		scanf("%s",polje[x]);
		for(int y=0;y<b;y++){
			if(polje[x][y]=='L'){
				if(l2){
					lx2=x;
					ly2=y;
				}else{
					lx1=x;
					ly1=y;
					l2=true;
				}
			}
		}
	}
	for(int x=0;x<a;x++)
		for(int y=0;y<b;y++)
			if(bio[x][y]==false && (polje[x][y]=='.' || polje[x][y]=='L'))
				bfs(x,y);
	lbfs();
	int ans=0,n;
	while(1){
		int x,y;
		if(sbfs()){
			printf("%d\n",ans);
			break;
		}
		n=led.size();
		for(int h=0;h<n;h++){
			x=led.front().first,y=led.front().second;
			polje[x][y]='.';
			for(int g=0;g<4;g++){
				if(x+sx[g]<0 || x+sx[g]==a || y+sy[g]<0 || y+sy[g]==b)continue;
				if(bio[x+sx[g]][y+sy[g]]==true)continue;
				if(polje[x+sx[g]][y+sy[g]]=='X'){
					led.push(make_pair(x+sx[g],y+sy[g]));
					bio[x+sx[g]][y+sy[g]]=true;
				}
			}
			led.pop();
		}
		ans++;
	}
}
