#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

char ans[3];
string tri;
int x=0;

int main(){
	ans[0]='x';
	cin >> tri;
	while(x<tri.size()){
	    if(tri[x]=='A'){
		    swap(ans[0],ans[1]);
		}else if(tri[x]=='B'){
  		    swap(ans[1],ans[2]);
		}else if(tri[x]=='C'){
  		    swap(ans[0],ans[2]);
		}
		x++;
	}
	for(int x=0;x<3;x++){
	    if(ans[x]=='x')printf("%d",x+1);
	}
}
