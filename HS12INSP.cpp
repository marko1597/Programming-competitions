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
    double r, xk, yk, x1, x2, y1, y2;
    double k, l, a, b, c, r1x, r2x, r1y, r2y;
    int t;
    scanf("%d", &t);
    while( t-- ){
        scanf("%lf %lf %lf %lf %lf %lf %lf", &xk, &yk, &r, &x1, &y1, &x2, &y2);
        if( x1 == x2 ){
            if( y2 < y1 )
                swap( x2, x1 ), swap( y2, y1 );
            a = 1;
            b = -2*yk;
            c = (x1 - xk)*(x1 - xk) + yk*yk - r*r;
            r1y = (-b + sqrt( b*b - 4 * a *c )) / ( 2 * a );
            r2y = (-b - sqrt( b*b - 4 * a *c )) / ( 2 * a );
            if( y1 <= r1y && r1y <= y2 )
                printf("%.2lf %.2lf\n", x1, r1y);
            else
                printf("%.2lf %.2lf\n", x1, r2y);
            continue;
        }
        if( x2 < x1 )
            swap( x2, x1 ), swap( y2, y1 );
        k = ( y2 - y1) / ( x2 - x1 );
        l = -k * x1 + y1;
        a = 1 + k * k;
        b = -2 * xk + 2 * k * l - 2 * k * yk;
        c = xk*xk + l*l + yk*yk - r*r - 2*l*yk;
        r1x = (-b + sqrt( b*b - 4 * a *c )) / ( 2 * a );
        r2x = (-b - sqrt( b*b - 4 * a *c )) / ( 2 * a );
        r1y = k*r1x + l;
        r2y = k*r2x + l;
        if( x1 <= r1x && r1x <= x2 )
            printf("%.2lf %.2lf\n", r1x, r1y);
        else
            printf("%.2lf %.2lf\n", r2x, r2y);
    }
}
