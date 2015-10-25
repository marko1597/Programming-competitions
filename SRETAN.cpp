#include <cstdio>
#include <string>
#include <sstream>
#include <string.h>
using namespace std;

int main(){
	unsigned long long n;
    int z[100],v[100];
    memset(z,-1,sizeof z);
    memset(v,0,sizeof v);
    scanf("%llu",&n);
    int b=0;   
    while(n>0){
        z[b]=((n-1)%2);
        n=(n-1)/2;
        b++;
    }
    int c=b;
    b=0;
    while(true){
	    if(z[b]==-1)break;
		v[b]=z[c-1];
		b++,c--;
	}
 	for(int c=0;c<b;c++){
		if(v[c]==-1)break;
	    if(v[c]==0){
            printf("4");
		}else if(v[c]==1){
  		    printf("7");
		}
	}
	system("pause");
}
