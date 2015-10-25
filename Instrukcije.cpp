#include <cstdio>
int main( void ) {
	const int max = 1000;
	int a,b,ret=0,n=0;
	scanf("%d %d",&a,&b);
	for(int x=1;x<max;x++){
	    for(int y=0;y<x;y++){
		    n+=1;
		    if( n >= a && n <= b ) ret += x;
			if( n >= b ) break;
		}
		if( n >= b ) break;
	}
	printf( "%d\n", ret );
	return 0;
}
