#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int n,*niz=NULL;
	scanf("%d",&n);
	niz=new int[n];
	for(int x=0;x<n;x++){
		scanf("%d",&niz[x]);
	}
	sort(niz,niz+n);
	for(int x=0;x<n;x++){
		printf("%d\n",niz[x]);
	}
}
