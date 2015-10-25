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

pair< int, int > ans;

int main(){
    int t,x1,x2,y1,y2,r;
    int minx, miny, maxx, maxy, n;
    char str[10];
    scanf("%d", &t);
    while( t-- ){
        minx = miny = 999999;
        maxx = maxy = -999999;
        scanf("%d", &n);
        for( int x = 0; x < n; x++ ){
            scanf("%s", str);
            if( str[0] == 'p'){
                scanf("%d %d", &x1, &y1);
                minx = min( minx, x1);
                miny = min( miny, y1);
                maxx = max( maxx, x1);
                maxy = max( maxy, y1);
            }else if( str[0] == 'c'){
                scanf("%d %d %d", &x1, &y1, &r);
                minx = min( minx, x1 - r);
                miny = min( miny, y1 - r);
                maxx = max( maxx, x1 + r);
                maxy = max( maxy, y1 + r);
            }else if( str[0] == 'l'){
                scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
                if( x2 < x1 )
                    swap(x1, x2);
                if( y2 < y1 )
                    swap(y1, y2);
                minx = min( minx, x1);
                miny = min( miny, y1);
                maxx = max( maxx, x2);
                maxy = max( maxy, y2);
            }
        }
        printf("%d %d %d %d\n", minx, miny, maxx, maxy);
    }
}
