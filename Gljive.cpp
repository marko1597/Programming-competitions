#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;

int r,s;
char ploca[55][55];
pair<int,int> pos;
queue<pair<int,int> >q;
int xs[]={0,0,1,-1};
int ys[]={1,-1,0,0};
int posx,posy,nextx,nexty;
bool bio[55][55];
int bfs(int x,int y){
	bio[x][y]=true;
	q.push(make_pair(x,y));
	int ans=0;
	while(q.empty()==false){
		pos=q.front();
		q.pop();
		posx=pos.first,posy=pos.second;
		if(ploca[posx][posy]=='G')ans++;
		for(int x=0;x<4;x++){
		    nextx=posx+xs[x],nexty=posy+ys[x];
			if(nexty<0 || nexty>s-1 || nextx<0 || nextx>r-1)continue;
			if(ploca[nextx][nexty]=='#')continue;
			if(bio[nextx][nexty]==true)continue;
			bio[nextx][nexty]=true;
			q.push(make_pair(nextx,nexty));
		}
	}
	return ans;
}
int main(){
	int soba=0;
	int ans=0;
	int c;
	scanf("%d %d",&r,&s);
	for(int x=0;x<r;x++){
		scanf("%s",ploca[x]);
	}
	for(int x=0;x<r;x++){
		for(int y=0;y<s;y++){
			if((ploca[x][y]=='.' || ploca[x][y]=='G') && bio[x][y]==false){
				ans=max(ans,bfs(x,y));
				soba++;
			}
		}
	}
	printf("%d\n%d\n",ans,soba);
	//system("pause");
}
