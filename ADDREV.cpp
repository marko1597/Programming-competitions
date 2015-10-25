#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string.h>
#include <algorithm>
#include <queue>
using namespace std;
int main(){
	int a,b;
	int t;
	int z1[50],z2[50];
	scanf("%d",&t);
	for(int x=0;x<t;x++){
		memset(z1,-1,sizeof z1);
		memset(z2,-1,sizeof z2);
		scanf("%d %d",&a,&b);
		int z=0;
		while(a!=0){
			z1[z]=a%10;
			a=a/10;
			z++;
		}
		int c1=z;
		z=0;
		while(b!=0){
			z2[z]=b%10;
			b=b/10;
			z++;
		}
		int c2=z;
		z=0;
		int deset=1,br1=0,br2=0;
		while(c1>0){
			br1+=z1[c1-1]*deset;
			c1--,deset*=10;
		}
		deset=1,br2=0;
		while(c2>0){
			br2+=z2[c2-1]*deset;
			c2--,deset*=10;
		}
		int ans=br1+br2;
		z=0;
		while(ans!=0){
			z1[z]=ans%10;
			ans=ans/10;
			z++;
		}
		c2=z;
		deset=1,br2=0;
		while(c2>0){
			br2+=z1[c2-1]*deset;
			c2--,deset*=10;
		}
		printf("%d\n",br2);
	}
}
