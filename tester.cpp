#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>
#include <stack>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <list>
#include <ctime>
#include <algorithm>
using namespace std;

int main(){
    FILE *in;
    srand(time(0));
    while(1){
        in = fopen("in.txt", "w");
        int n = rand()%10000;
        fprintf(in,"%d\n", n);
        for( int i = 0; i < n; i++ ){
            if( rand() % 2 == 0)
                fprintf(in, "u %d\n", rand());
            else{
                int a = 1, b = 0, k;
                while( a > b ){
                    a = rand();
                    b = rand();
                }
                k = rand()%(5)+1;
                fprintf(in, "n %d %d %d\n", a, b, k);
            }
        }
        fclose(in);
        system("Blingo.exe < in.txt > out1.txt");
        system("Blingo-brute.exe < in.txt > out2.txt");
        int a = system("fc out2.txt out1.txt");
        if(  a == 1 )
            system("pause");
    }
}
