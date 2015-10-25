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

int main(){
	int n;
	char niz[50][50];
	scanf("%d",&n);
	for(int x=0;x<n;x++)
		scanf("%s",niz[x]);
	for(int x=0;x<n-2;x++){
		for(int y=0;y<n-2;y++){
			if(niz[x][y]==niz[x+1][y] && niz[x+1][y]==niz[x+2][y]){
				if(niz[x][y]!='.'){
					printf("%c\n",niz[x][y]);
					return 0;
				}
			}else if(niz[x][y+1]==niz[x+1][y+1] && niz[x+1][y+1]==niz[x+2][y+1]){
				if(niz[x][y+1]!='.'){
					printf("%c\n",niz[x][y+1]);
					return 0;
				}
			}else if(niz[x][y+2]==niz[x+1][y+2] && niz[x+1][y+2]==niz[x+2][y+2]){
				if(niz[x][y+2]!='.'){
					printf("%c\n",niz[x][y+2]);
					return 0;
				}
			}else if(niz[x][y]==niz[x][y+1] && niz[x][y+1]==niz[x][y+2]){
				if(niz[x][y]!='.'){
					printf("%c\n",niz[x][y]);
					return 0;
				}
			}else if(niz[x+1][y]==niz[x+1][y+1] && niz[x+1][y+1]==niz[x+1][y+2]){
				if(niz[x+1][y]!='.'){
					printf("%c\n",niz[x+1][y]);
					return 0;
				}
			}else if(niz[x+2][y]==niz[x+2][y+1] && niz[x+2][y+1]==niz[x+2][y+2]){
				if(niz[x+2][y]!='.'){
					printf("%c\n",niz[x+2][y]);
					return 0;
				}
			}else if(niz[x][y]==niz[x+1][y+1] && niz[x+1][y+1]==niz[x+2][y+2]){
				if(niz[x][y]!='.'){
					printf("%c\n",niz[x][y]);
					return 0;
				}
			}else if(niz[x+2][y]==niz[x+1][y+1] && niz[x+1][y+1]==niz[x][y+2]){
				if(niz[x+2][y]!='.'){
					printf("%c\n",niz[x+2][y]);
					return 0;
				}
			}
		}
	}
	printf("jos traje\n");
}
