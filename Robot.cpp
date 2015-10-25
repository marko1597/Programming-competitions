#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <math.h>
using namespace std;

int main(){
	int xpo,ypo,p,sd[2][4]={{1,0,-1,0},
                            {0,-1,0,1}};
    int c=0;
	string a;
	scanf("%d %d %d",&p,&xpo,&ypo);
	cin >> a;
	for(int x=0;x<a.size();x++){
	    if(a[x]=='N')xpo+=sd[0][c],ypo+=sd[1][c];
	    if(a[x]=='D'){
 		    c+=1;
 		    if(c>3)c=0;
		}
		if(a[x]=='L'){
  		    c-=1;
  		    if(c<0)c=3;
		}
	}
	printf("%d %d\n",xpo,ypo);
}
