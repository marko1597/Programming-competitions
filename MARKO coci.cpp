#include <cstdio>
#include <map>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;

map<string, int> D;
int tran[256];
void addtoDictionary( char *n ){
    string tra = "";
    for( int i = 0; i < strlen(n); i++ )
        tra.push_back(tran[n[i]]);
    D[tra]++;
}
void Init(){
    tran['a'] = '2';
    tran['b'] = '2';
    tran['c'] = '2';
    tran['d'] = '3';
    tran['e'] = '3';
    tran['f'] = '3';
    tran['g'] = '4';
    tran['h'] = '4';
    tran['i'] = '4';
    tran['j'] = '5';
    tran['k'] = '5';
    tran['l'] = '5';
    tran['m'] = '6';
    tran['n'] = '6';
    tran['o'] = '6';
    tran['p'] = '7';
    tran['q'] = '7';
    tran['r'] = '7';
    tran['s'] = '7';
    tran['t'] = '8';
    tran['u'] = '8';
    tran['v'] = '8';
    tran['w'] = '9';
    tran['x'] = '9';
    tran['y'] = '9';
    tran['z'] = '9';
}
char in[1000000];
int main(){
    Init();
    int n;

    scanf("%d", &n);
    for( int i = 0; i < n; i++ ){
        scanf("%s", in);
        addtoDictionary(in);
    }
    scanf("%s", in);
    printf("%d\n", D[in]);
}
