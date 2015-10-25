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

typedef long long llint;

const int MAX=300;
int ploca[MAX+5][MAX+5];
int R[MAX+5];
int S[MAX+5];
int main(){
	int n,ans=0;
	memset(R,0,sizeof R);
	memset(S,0,sizeof S);
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		for(int y=0;y<n;y++){
			scanf("%d",&ploca[x][y]);
			R[x]+=ploca[x][y];
			S[y]+=ploca[x][y];
		}
	}
	for(int r=0;r<n;r++)
		for(int c1=0;c1<n;c1++)
			for(int c2=c1+1;c2<n;c2++)
				ans=max(ans,R[r]+S[c1]+S[c2]-2*ploca[r][c1]-2*ploca[r][c2]);
	for(int c=0;c<n;c++)
		for(int r1=0;r1<n;r1++)
			for(int r2=r1+1;r2<n;r2++)
				ans=max(ans,S[c]+R[r1]+R[r2]-2*ploca[r1][c]-2*ploca[r2][c]);
	for(int r1=0;r1<n;r1++)
		for(int r2=0;r2<n;r2++){
			if(r1==r2)continue;
			int c1=-1,max1=-5000000;
			for(int c=0;c<n;c++){
				int val=S[c]-ploca[r2][c]-2*ploca[r1][c];
				if(val>max1){max1=val;c1=c;}
			}
			int c2=-1,max2=-5000000;
			for(int c=0;c<n;c++){
				int val=S[c]-ploca[r1][c]-2*ploca[r2][c];
				if(c!=c1 && val>max2){max2=val;c2=c;}
			}
			ans=max(ans,R[r1]+R[r2]+S[c1]-ploca[r2][c1]-2*ploca[r1][c1]+S[c2]-ploca[r1][c2]-2*ploca[r2][c2]);
		}
	printf("%d\n",ans);
}
