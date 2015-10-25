#include <map>
#include <cstdio>
using namespace std;

typedef unsigned long long llint;

int main(){
	llint n,t,b,ans=0;
	map<llint,llint>grad;
	for(llint x=0;x<3;x++){
		scanf("%llu",&t);
		for(llint y=0;y<t;y++){
			scanf("%llu",&b);
			grad[b]+=1;
		}
	}
	for(map<llint,llint>::iterator x=grad.begin();x!=grad.end();x++){
		if(x->second==3)ans++;
	}
	printf("%llu\n",ans);
}
