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

const int maxn = 65536;

int n, m;

stack< pair< int , int > > move_nar;

struct file{
    char ime[10];
    int sb, l;
};
struct block{
    char data[10];
    int np, pp, fid, pos;
};

file fn[maxn];
block db[maxn];
int fset[maxn];

int hz( char a ){
    if( a>= '0' && a <= '9' )
        return a - '0';
    else
        return tolower( a ) - 'a' + 10;
}
int htn( char *a ){
    int l = strlen( a ), b = 1, ret = 0;
    for( int x = l -1; x >= 0; x-- ){
        ret += b * hz( a[x] );
        b *= 16;
    }
    return ret;
}
void initdata(){
    int start, prije;
    for( int x = 0; x < n; x++ ){
        start = fn[x].sb, prije = -1;
        fn[x].l = 1;
        db[ start ].pos = l -1;
		db[ start ].fid = x;
        fset[ start ] = x;
        while( db[ start ].np != maxn - 1 ){
            fn[x].l++;
            db[ start ].pos = l -1;
            db[ start ].fid = x;
            db[ start ].pp = prije;
            fset[ start ] = x;
            prije = start;
            start = db[ start ].np;
        }
		db[ start ].fid = x;
		db[ start ].pp = prije;
		fset[ start ] = x;
    }
}
void move( int a, int b ){
    int tmp = db[a].pp;
    db[ tmp ].np = b;
    db[ db[b].pp ].np = a;
}
int defrag( int fnum ){
    int st = fn[fnum].sb, ret = 0, pret = st - 1;
    do{
        if( st != pret + 1 )
            ret++;
        pret = st;
        st = db[st].np;
    }while( st != maxn -1 );
    return ret;
}
int find( int fnum ){
    int pos, start, ref, ret = 0;
    start = fn[ fnum ].sb;
    pos = db[ start ].pos;
    ref = start;
    while( start != maxn -1){
        if( start - ref == pos )
            ret++;

    }

}
int main(){
	memset( fset, -1, sizeof fset);
    char tmp[10];
    scanf("%d %d", &n, &m);
    for( int x = 0; x < n; x++ ){
        scanf("%s %s", fn[x].ime, tmp );
        fn[x].sb = htn( tmp );
        fn[x].l = 0;
    }
    for( int x = 0; x < m; x++ ){
        scanf("%s %s", db[x].data, tmp );
        db[x].np = htn( tmp );
    }
    initdata();
	for( int x = 0; x < n; x++ )
		printf("%d ", defrag( x ) );
	putchar( '\n' );
    for( int x = 0; x < m; x++ )
        printf("%d ", fset[x] );
    putchar('\n');

}
