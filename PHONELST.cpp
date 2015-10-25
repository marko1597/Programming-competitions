#include <cstdio>
#include <cstring>
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <time.h>
#include <string.h>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
using namespace std;

const int start=0;
int p=0;
char in[15000][20];
struct node{
    bool bio;
    int br[10];
    node(){
        bio=0;
        memset(br,-1,sizeof br);
    }
};
node niz[150000];
int novi(){
    return ++p;
}
int curr,ccc=0;
void ubaci(){
    scanf("%s",in[ccc++]);
    curr=start;
    for(int x=0;x<strlen(in[ccc-1]);x++){
        if(niz[curr].br[in[ccc-1][x]-'0']==-1)
            niz[curr].br[in[ccc-1][x]-'0']=novi();
        curr=niz[curr].br[in[ccc-1][x]-'0'];
    }
    niz[curr].bio=1;
    return;
}
bool check(){
    bool ret=0;
    for(int x=0;x<ccc;x++){
        curr=start;
        for(int j=0;j<strlen(in[x]);j++){
			ret=ret || niz[curr].bio;
			if(ret)
                return ret;
            if(niz[curr].br[in[x][j]-'0']==-1)
                break;
            curr=niz[curr].br[in[x][j]-'0'];

        }
    }
    return ret;
}
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        p=0;
        ccc=0;
        for(int x=0;x<150000;x++){
            niz[x].bio=0;
            memset(niz[x].br,-1,sizeof niz[x].br);
        }
        scanf("%d",&n);
        for(int x=0;x<n;x++)
            ubaci();
        if(check())
            printf("NO\n");
        else
            printf("YES\n");
    }
}
