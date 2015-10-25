#include <cstdio>
#include <cstring>
#include <iostream>
#include <math.h>
#include <cmath>
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

char polje[500][500],s1[50];
int xx,yy;
int main(){
	memset(polje,'.',sizeof polje);
	int c,n,l;
	scanf("%d %d",&c,&n);
	for(int x=0;x<c;x++){
		scanf("%s %d %d",s1,&xx,&yy);
		xx--,yy--,l=0;
		for(int x=1;x<strlen(s1);x++)
			l+=l*10+s1[x]-'0';
		if(s1[0]=='V'){
			for(int x=0;x<l;x++)
				for(int y=0;y<3;y++)
					polje[yy+x*2][xx+y]='#';
			for(int x=0;x<l/2+l%2;x++)
				polje[yy+1+x*4][xx+2]='#';
			for(int x=0;x<l/2;x++)
				polje[yy+3+x*4][xx]='#';
		}else if(s1[0]=='H'){
			for(int y=0;y<l;y++)
				for(int x=0;x<3;x++)
					polje[yy+x][xx+y*2]='#';
			for(int x=0;x<l/2+l%2;x++)
				polje[yy+2][xx+1+4*x]='#';
			for(int x=0;x<l/2;x++)
				polje[yy][xx+3+4*x]='#';
		}
	}
	for(int x=0;x<n;x++){
			for(int y=0;y<n;y++)
				putchar(polje[x][y]);
			putchar('\n');
		}
}
