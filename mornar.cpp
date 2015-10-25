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

const int maxn = 500;

int p = 0;
char ime[maxn];
map<string, int> m;
map<int, string> r;
int niz[30000];
int line(){
    char li[maxn];
    string s1,s2;
    while( getchar() != ':' );
    scanf("%s", li);
    int s = strlen( li );
    for( int x = 0; x < s; x++ )
        if( li[x] == '>' ){
            for( int i = 0; i < x-1; i++)
                s1.push_back( li[i] );
            for( int i = x+1; i < s; i++ )
                s2.push_back( li[i] );
            break;
        }
    if( m.find( s1 ) == m.end() ){
        r[p] = s1;
        m[s1] = p++;
    }
    if( m.find( s2 ) == m.end() ){
        r[p] = s2;
        m[s2] = p++;
    }
    niz[m[s1]] = m[s2];
	return 0;
}
int main(){
    int n;
    scanf("%d %s", &n, ime);
    for( int x = 0; x < n; x++ )
        line();
    int start = m[ime], tr = start;
    printf("%s->", ime);
    tr = niz[tr];
    while( tr != start ){
        printf( "%s->", r[tr].c_str() );
        tr = niz[tr];
    }
    printf("%s\n", ime);
}
