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
#include <stack>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main(){
	int n;
	char naredba[2];
	char malistr[2];
	char rjec[100100];
	stack<char>ldio,ddio;
	scanf("%s",rjec);
	for(char *x=rjec;*x;x++){
		ldio.push(*x);
	}
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%s",naredba);
		if(naredba[0]=='L'){
			if(ldio.empty()==true)continue;
			ddio.push(ldio.top());
			ldio.pop();
		}else if(naredba[0]=='D'){
			if(ddio.empty()==true)continue;
			ldio.push(ddio.top());
			ddio.pop();
		}else if(naredba[0]=='B'){
			if(ldio.empty()==true)continue;
			ldio.pop();
		}else if(naredba[0]=='P'){
			scanf("%s",malistr);
			ldio.push(malistr[0]);
		}
	}
	while(ldio.empty()==false){
		ddio.push(ldio.top());
		ldio.pop();
	}
	while(ddio.empty()==false){
		putchar(ddio.top());
		ddio.pop();
	}
	putchar('\n');
	system("pause");
}
