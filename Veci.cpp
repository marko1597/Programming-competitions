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

bool bio[20];
int si,niz[20],broj;
void rek(int n=0,int p=0){
	for(int x=0;x<si;x++){
		if(!bio[x]){
			bio[x]=true;
			rek(n*10+niz[x],p+1);
			bio[x]=false;
		}
	}
	if(p==si){
		if(n>broj){
			printf("%d\n",n);
			exit(0);
		}
	}
}
int main(){
	int n;
	int b=0;
	memset(bio,0,sizeof bio);
	scanf("%d",&n);
	broj=n;
	while(n>0){
		niz[b]=n%10;
		n/=10;
		b++;
	}
	reverse(niz,niz+b);
	si=b;
	rek();
	printf("0\n");
}
