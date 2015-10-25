#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int a[3];
	char s[8];
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	sort(a,a+3);
	scanf("%s",s);
	if(s[0]<s[1] && s[0]<s[2] && s[1]<s[2]){
 	    printf("%d %d %d",a[0],a[1],a[2]);
	}else if(s[0]<s[1] && s[0]<s[2] && s[1]>s[2]){
 	    printf("%d %d %d",a[0],a[2],a[1]);
	}else if(s[0]>s[1] && s[0]<s[2] && s[1]<s[2]){
 	    printf("%d %d %d",a[1],a[0],a[2]);
	}else if(s[0]<s[1] && s[0]>s[2] && s[1]>s[2]){
 	    printf("%d %d %d",a[1],a[2],a[0]);
	}else if(s[0]>s[1] && s[0]>s[2] && s[1]<s[2]){
 	    printf("%d %d %d",a[2],a[0],a[1]);
	}else if(s[0]>s[1] && s[0]>s[2] && s[1]>s[2]){
 	    printf("%d %d %d",a[2],a[1],a[0]);
	}
}
