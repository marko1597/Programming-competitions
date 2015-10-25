#include <cstdio>
using namespace std;

int main(){
	int n,br=0;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		for(int y=x;y<n/(x+1);y++){
			if((x+1)*(y+1)>n)break;
			br++;
		}
	}
	printf("%d\n",br);
}
