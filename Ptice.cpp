#include <cstdio>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
int main(){
	char t1[]="ABC",t2[]="BABC",t3[]="CCAABB";
	int b1=0,b2=0,b3=0;
	int a1=0,a2=0,a3=0;
	int n;
	string s;
	scanf("%d",&n);
	cin >> s;
	for(int x=0;x<s.size();x++){
	    if(b1>2)b1=0;
	    if(b2>3)b2=0;
	    if(b3>5)b3=0;
	    if(s[x]==t1[b1]){
 		    a1++;
        }
	    if(s[x]==t2[b2]){
		    a2++;
	    }
	    if(s[x]==t3[b3]){
 		    a3++;
        }
	    b1++,b2++,b3++;
	}
	if(a1==a2 && a1==a3){
 	    printf("%d\nAdrian\nBruno\nGoran",a1);
	}else if(a1==a2 && a1>a3){
 	    printf("%d\nAdrian\nBruno",a1);
	}else if(a2==a3 && a2>a1){
 	    printf("%d\nBruno\nGoran",a2);
	}else if(a1==a3 && a1>a2){
 	    printf("%d\nAdrian\nGoran",a1);
	}else if(a1>a2 && a1>a3){
 	    printf("%d\nAdrian",a1);
	}else if(a2>a1 && a2>a3){
 	    printf("%d\nBruno",a2);
	}else if(a3>a1 && a3>a2){
 	    printf("%d\nGoran",a3);
	}
}
