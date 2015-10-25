#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;


int main()
{
	string s,izlaz,cas,izlaz1;
	int a;
loop:
	cin >> a;
	cin >> s;
	for(int i1=0;i1<a;i1++){
		for(int i=0;i<s.size()/a;i++){
				if(i%2!=0){
					cas=s[a*i+a-1-i1];
					izlaz+=cas;
				}else{
					cas=s[a*i+i1];
					izlaz+=cas;
				}
		}
	}
	izlaz1+=izlaz+"\n";
	izlaz="";
	if(a!=0){
		goto loop;
	}
	cout << izlaz1;
}
