#include <cstdio>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>
using namespace std;
int main(){
	string s1;
	cin >> s1;
	int bm=3,ans=0;
	for(int c=s1.size()-1;c>=0;c--){
		if(s1[c]>='A' && s1[c]<='Z'){
			ans+=bm;
		}
		if(s1[c]>='a' && s1[c]<='z'){
			bm-=1;
		}
	}
	printf("%d",ans);
	system("pause");
}
