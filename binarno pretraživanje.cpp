#include <cstdio>
#include <iostream>
using namespace std;
unsigned long long n;
unsigned long long korjen(unsigned long long start,unsigned long long end,unsigned long long br){
	if(start > end)return 0;
	unsigned long long mid=(start+end)/2;
	if(mid*mid==br){
	    return mid;
	}else if(mid*mid>br){
 	    return korjen(start,mid-1,br);
 	}else{
  	    return korjen(mid+1,end,br);
  	}
}
int main(){
	scanf("%llu",&n);
	printf("%llu\n",korjen(0,n,n));
	system("pause");
}
