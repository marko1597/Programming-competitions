#include <cstdio>
int main( void ) {
   int n = 0;
   int niz[1000];

   for( int i = 1; n < 1000; ++i )
      for( int j = 1; j <= i && n < 1000; ++j )
         niz[n++] = i;

   int a, b;
   scanf( "%d%d", &a, &b );

   int suma = 0;
   for( int i = a-1; i < b; ++i ) suma += niz[i];

   printf( "%d\n", suma );

   return 0;
}
