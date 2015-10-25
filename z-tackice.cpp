#include <cstdio>
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
	double niz[1000][50];
	int n,k;
	scanf("%d %d",&n,&k);
	for(int x=0;x<n;x++){
		for(int y=0;y<k;y++){
			scanf("%lf",&niz[x][y]);
		}
	}
	long double mi=0,ld;
	long double ans=0;
	bool ansss=false;
	for(int x=0;x<n;x++){
		for(int y=x+1;y<n;y++){
			mi=0;
			for(int c=0;c<k;c++){
				ld=(niz[x][c]-niz[y][c]);
				mi+=ld*ld;
			}
			if(ansss==false){
				ansss=true;
				ans=mi;
			}else{
				ans=min(ans,mi);
			}
		}
	}
	printf("%.5f\n",float(sqrt(ans)));
	//system("pause");
}
