#include <cstdio>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;

char a[10],b[10];
int main(){
	scanf("%s %s",a,b);
	sort(a,a+10);
	sort(b,b+10);
	if(string(a)==string(b)){
 	    printf("Won\n");
 	}else{
  	    printf("Lose\n");
  	}
}
