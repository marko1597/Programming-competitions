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
#include <string.h>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main(){
	char niz[500];
	int s,sm=4;
	int sx[]={0,0,1,-1,0};
	int sy[]={1,-1,0,0,0};
	int w=0,h=0;
	fgets(niz,sizeof niz,stdin);
	s=strlen(niz);
	int br=0;
	for(int x=0;x<s;x++){
		if(niz[x]>='0' && niz[x]<='9'){
			br=br*10+niz[x]-'0';
		}else{
			w+=sx[sm]*br;
			h+=sy[sm]*br;
			br=0;
		}
		if(niz[x]=='n'){
			sm=0;
		}else if(niz[x]=='s'){
			sm=1;
		}else if(niz[x]=='e'){
			sm=2;
		}else if(niz[x]=='w'){
			sm=3;
		}else if(!(niz[x]>='0' && niz[x]<='9')){
			sm=4;
		}
	}
	printf("%.2f\n",sqrt(float(w*w+h*h)));
}
