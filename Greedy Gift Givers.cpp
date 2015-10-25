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
	int N,a,b;
	char ime[50];
	char im[50][50];
	map<string,int>m;
	scanf("%d",&N);
	for(int x=0;x<N;x++){
		scanf("%s",ime);
		for(int c=0;c<strlen(ime)+1;c++){
			im[x][c]=ime[c];
		}
		m[ime]=0;
	}
	for(int x=0;x<N;x++){
		scanf("%s %d %d",ime,&a,&b);
		if(b>0)m[ime]-=(a/b)*b;
		for(int y=0;y<b;y++){
			scanf("%s",ime);
			m[ime]+=a/b;
		}
	}
	for(int x=0;x<N;x++){
		printf("%s %d\n",im[x],m[im[x]]);
	}
}
