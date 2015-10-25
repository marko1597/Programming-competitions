#include <cstdio>

int main(){
	int h,m,h1,m1;
	scanf("%d %d",&h,&m);
	h1=((h*60+m)-45)/60;
	m1=((h*60+m)-45)%60;
	printf("%d %d",h1,m1);
}
