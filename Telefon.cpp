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
using namespace std;

int main(){
	char a[100],b[100];
	string z;
	scanf("%s",a);
	scanf("%s",b);
	int p=0,x=0;
	while(x<strlen(a)){
		if(a[x]=='x'){
			z.push_back(b[p]);
			p++;
		}else if(a[x]=='-'){
			z.push_back('-');
		}
		x++;
	}
	cout << z << endl;
}
