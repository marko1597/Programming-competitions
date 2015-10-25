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

int main(){
    int n,t,a,ans;
    scanf("%d",&t);
    while(t--){
        ans=0;
        scanf("%d",&n);
        for(int x=0;x<n;x++){
            scanf("%d",&a);
            ans+=a/(x+1);
        }
        printf("%s\n",ans%2?"ALICE":"BOB");
    }
}
