#include <cstdio>
#include <algorithm>
#include <string.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int t,niz[2][1120],n;
    long long ans=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
	memset(niz,0,sizeof niz);
        scanf("%d",&n);
        for(int c=0;c<2;c++){
            for(int x=0;x<n;x++){
                scanf("%d",&niz[c][x]);
            }
        }
        sort(niz[0],niz[0]+n);
        sort(niz[1],niz[1]+n);
        for(int x=1120-1;x>=0;x--){
            ans+=niz[0][x]*niz[1][x];
        }
        printf("%d\n",ans);
        ans=0;
    }   
}
