#include <cstdio>
#include <map>
#include <string>
using namespace std;

int main(){
	int n,ans=0;
	char rjec[200];
	map<string,int> rjecnik;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%s",rjec);
		rjecnik[rjec]+=1;
	}
	for(int x=0;x<n;x++){
		scanf("%s",rjec);
		rjecnik[rjec]+=1;
	}
	for(map<string,int>::iterator x=rjecnik.begin();x!=rjecnik.end();x++){
		ans+=x->second/2;
	}
	printf("%d\n",ans);
}
