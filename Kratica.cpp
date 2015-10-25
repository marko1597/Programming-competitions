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

char vez[10][5]={"i","pa","te","ni","niti","a","ali","nego","no","ili"};
set<string>veznik;
int main(){
	for(int x=0;x<10;x++){
		veznik.insert(vez[x]);
	}
	char rjec[100];
	for(int x=0;feof(stdin)==false;x++){
		scanf("%s",rjec);
		if(x!=0 && veznik.find(rjec)!=veznik.end()){x++;continue;}
		if(rjec[0]<46)continue;
		printf("%c",toupper(rjec[0]));
		memset(rjec,0,sizeof rjec);
	}
	printf("\n");
}
