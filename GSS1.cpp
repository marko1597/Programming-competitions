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
/*   t->l_sum=max(l->l_sum,(l->sum+r->l_sum));
   t->r_sum=max(r->r_sum,(l->r_sum+r->sum));
   t->sum=l->sum+r->sum;
   t->max_sum=max(l->max_sum,r->max_sum);
   t->max_sum=max(t->max_sum,(l->r_sum+r->l_sum));*/
int main(){
    int a1,b1,c1,d1,a2,b2,c2,d2;
    scanf("%d %d %d %d %d %d %d %d",&a1,&b1,&c1,&d1,&a2,&b2,&c2,&d2);
    printf("%d %d %d %d",max(a1,c1+a2),max(a2,c2+a1),)
}
