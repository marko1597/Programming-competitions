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
	int n,k,l;
	bool bbb=false;
	char nar[10005];
	scanf("%d %d %d",&k,&l,&n);
	scanf("%s",nar);
	bool a=false;
	int s=0,d=0;
	for(int x=0;x<n;x++){
		if(nar[x]=='1'){
			s++;
			d=0;
			if(s>=k)a=true;
		}else{
			d++;
			s=0;
			if(a && d>=l){
				s=0;
				a=false;
				printf("%d\n",x+1);
				bbb=true;
			}
		}
	}
	if(a==true){
		bbb=true;
		printf("%d\n",n+l);
	}
	if(bbb==false)printf("NIKAD\n");
}
