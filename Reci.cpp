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
	char a[82];
	string c;
	int b[82];
	memset(b,0,sizeof a);
	scanf("%s",a);
	int x=0;
	while(true){
		if(a[x]=='\n' || a[x]==0)break;
		b[x]=a[x];
		x++;
	}
	sort(b,b+x);
	x=0;
	while(b[x]!=0){
		c+=b[x];
		x++;
	}
	printf("%s",c.c_str());
}
