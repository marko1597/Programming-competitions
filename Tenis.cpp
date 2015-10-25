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

char niz[2000];
char igr;
int prvi,drugi,gem1,gem2;
int main(){
	prvi=drugi=0;
	igr=false;
	scanf("%s",niz);
	int s=strlen(niz);
	for(int x=0;x<s;x++){
		if(igr==false){
			if(niz[x]=='S'){
				prvi++;
			}else{
				drugi++;
			}
		}else{
			if(niz[x]=='S'){
				drugi++;
			}else{
				prvi++;
			}
		}
		if(prvi>=4 && prvi-drugi>=2){
			gem1++;
			prvi=drugi=0;
			if(igr==false)igr=true;
			else igr=false;
		}else if(drugi>=4 && drugi-prvi>=2){
			gem2++;
			prvi=drugi=0;
			if(igr==false)igr=true;
			else igr=false;
		}
		if(gem1>=6 && gem1-gem2>=2){
			printf("%d %d\n",gem1,gem2);
			gem1=gem2=0;
		}else if(gem2>=6 && gem2-gem1>=2){
			printf("%d %d\n",gem1,gem2);
			gem1=gem2=0;
		}
	}
	printf("%d %d\n",gem1,gem2);
}
