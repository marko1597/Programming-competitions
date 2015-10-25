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

struct vagon{
	int slova[225];
	int br;
};
int main(){
	int n,k,p;
	vagon niz[20];
	for(int x=0;x<20;x++){
		niz[x].br=0;
		memset(niz[x].slova,0,sizeof niz[x].slova);
	}
	char ime[50];
	scanf("%d %d",&n,&k);
	scanf("%d",&p);
	int mm=123456,c,h;
	for(int x=0;x<p;x++){
		scanf("%s",ime);
		mm=123456;
		for(int y=0;y<n;y++){
			if(mm>niz[y].slova[ime[0]] && niz[y].br<k){
				mm=niz[y].slova[ime[0]];
				c=y;
				h=niz[y].br;
			}else if(mm==niz[y].slova[ime[0]] && mm!=123456 && h>niz[y].br){
				mm=niz[y].slova[ime[0]];
				c=y;
				h=niz[y].br;
			}
		}
		niz[c].slova[ime[0]]+=1;
		niz[c].br+=1;
	}
	for(int x=0;x<n;x++){
		if(x>0)printf(" %d",niz[x].br);
		else printf("%d",niz[x].br);
	}
	printf("\n");
}
