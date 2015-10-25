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
using namespace std;

string multip(string a,string b){
	vector<int> ans;
	string anas;
	for(int x=0;x<(a.size()+b.size())-1;x++){
		ans.push_back(0);
	}
	for(int x=a.size()-1;x>=0;x--){
		for(int y=b.size()-1;y>=0;y--){
			ans[x+y]+=(a[x]-'0')*(b[y]-'0');
			if(ans[x+y]>9 && x+y-1>=0)ans[x+y-1]+=ans[x+y]/10,ans[x+y]%=10;
		}
	}
	if(ans[0]>9)ans.insert(ans.begin(),1,ans[0]/10),ans[1]%=10; 
	for(int x=0;x<ans.size();x++){
		anas.push_back('0'+ans[x]);
	}
	return anas;
}
int main()
{	
	int t;
	string a,b;
	scanf("%d",&t);
	for(int x=0;x<t;x++){
		cin >> a >> b;
		printf("%s\n",multip(a,b).c_str());
	}
	system("pause");
}
