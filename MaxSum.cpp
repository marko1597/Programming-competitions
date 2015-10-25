#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int n;
	long long int br,tren=0,maxx=0;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
	    scanf("%lli",&br);
	    tren+=br;
	    if(tren<0){
 		    tren=0;
 		}else{
	  	    maxx=max(maxx,tren);
	  	}
	}
	printf("%lli\n",maxx);
	//system("pause");
}
