#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
int z[10]={0,9,99,999,9999,99999,999999,9999999,99999999,999999999};
void rek(int n,int t){
	 if(n==0){
  	 }
	 for(int x=1;x<n;x++){
	     rek(n-1,z[n-1]);
	 }
}
int main(){
	int n;
	scanf("%d",&n);
	rek(n,z[n]);
}
