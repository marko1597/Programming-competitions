#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string.h>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

vector<short>r;
char a[10005],b[10005];
int main()
{	
    int t;
    scanf("%d",&t);
    while(t--){
    	scanf("%s %s",a,b);
        r.assign(strlen(a)+strlen(b),0);
        int l1=strlen(a)-1,l2=strlen(b)-1;
        for(int x=0;x<strlen(a);x++)
            for(int z=0;z<strlen(b);z++)
                r[l1+l2-x-z+1]+=(a[l1-x]-'0')*(b[l2-z]-'0');
        for(int x=r.size()-1;x>0;x--)
            r[x-1]+=r[x]/10,r[x]%=10;
        for(int x=0;x<r.size();x++)
            if(r[x])
                for(;x<r.size();x++)
                    putchar('0'+r[x]);
        putchar('\n');
    }
}
