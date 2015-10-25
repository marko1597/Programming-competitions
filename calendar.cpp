#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){
	int broj_dana,s1,s2;
	scanf("%d",&broj_dana);
	string prvi_dan;
	cin >> prvi_dan;
	if(prvi_dan=="monday")s1=0;
	if(prvi_dan=="tuesday")s1=1;
	if(prvi_dan=="wednesday")s1=2;
	if(prvi_dan=="thursday")s1=3;
	if(prvi_dan=="friday")s1=4;
	if(prvi_dan=="saturday")s1=5;
	if(prvi_dan=="sunday")s1=6;
	s2=(s1+broj_dana-1)%7;
	printf("%d\n",s1+6-s2);
}
