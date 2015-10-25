#include <cstdio>
#include <iostream>
using namespace std;

struct vreme{
    int s,m,e;
};
vreme makee(int a,int b,int c){
      vreme hha;
      hha.m=a;
      hha.s=b;
      hha.e=c;
      return hha;
}
int main(){
    int n,ss,mm,ekip;
    vreme niz[100];
    scanf("%d",&n);
    for(int x=0;x<n;x++){
        scanf("%d %d:%d",&ekip,&mm,&ss);
        niz[x]=makee(mm,ss,ekip);
    }
    int x=0;
    int c=0;
    int r1=0,r2=0;
    int t1=0,t2=0;
    while(x<48*60){
        if(niz[c].s==x%60 && niz[c].m==x/60){
            if(niz[c].e==1)r1++;
            else r2++;
            c++;
        }
        if(r1!=r2){
            if(r1>r2)t1++;
            else t2++;
        }
        x++;
    }
    printf("%02d:%02d\n",t1/60,t1%60);
    printf("%02d:%02d\n",t2/60,t2%60);
    //system("pause");
}
