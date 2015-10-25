#include <cstdio>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
int main(){
	string s,ans;
	cin >> s;
	for(int x=0;x<s.size();x++){
	    if(s[x]>='A' && s[x]<='Z')ans+=s[x];
	}
	printf("%s",ans.c_str());
}
