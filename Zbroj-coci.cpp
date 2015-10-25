#include <cstdio>
#include <string.h>
using namespace std;

int main(){
    int a,b;
    int mina[8],minb[8],maxa[8],maxb[8];
    scanf("%d %d",&a,&b);
    memset(mina,-1,sizeof mina);
    memset(minb,-1,sizeof minb);
    memset(maxa,-1,sizeof maxa);
    memset(maxb,-1,sizeof maxb);
    int x=0;
    while(a!=0){
        mina[x]=a%10;
        maxa[x]=a%10;
        a=a/10;
        x++;
    }
    x=0;
    while(b!=0){
        minb[x]=b%10;
        maxb[x]=b%10;
        b=b/10;
        x++;
    }
    x=0;
    while(mina[x]!=-1){
        if(mina[x]==6){
            mina[x]=5;
        }
        x++;
    }
    x=0;
    while(maxa[x]!=-1){
        if(maxa[x]==5){
            maxa[x]=6;
        }
        x++;
    }
    x=0;
    while(minb[x]!=-1){
        if(minb[x]==6){
            minb[x]=5;
        }
        x++;
    }
    x=0;
    while(maxb[x]!=-1){
        if(maxb[x]==5){
            maxb[x]=6;
        }
        x++;
    }
    int amin=0,bmin=0,amax=0,bmax=0,zna,deset=1;
    x-=1;
    for(int asd=0;asd<x;asd++){
        deset*=10;
    }
    zna=x;
    while(x!=-1){
        amin+=mina[x]*deset;
        bmin+=minb[x]*deset;
        amax+=maxa[x]*deset;
        bmax+=maxb[x]*deset;
        deset/=10;
        x--;
    }
    printf("%d %d",amin+bmin,amax+bmax);
    //system("pause");
}
