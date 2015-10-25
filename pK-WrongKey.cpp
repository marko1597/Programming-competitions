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

string cod="`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
char conv(char n){
	if(n==' ')return ' ';
	return cod[cod.find(n)-1];
}
int main(){
	char rjec[2000];
	gets(rjec);
	int x=0;
	bool raz=true;
	char a;
	while(rjec[x]!=0){
		a=conv(rjec[x]);
		printf("%c",a);
		x++;
	}
}
