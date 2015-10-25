#include <cstdio>

int mjesec[12]={3,6,6,2,4,7,2,5,1,3,6,1};
char dan[7][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
int main(){
	int d,m;
	scanf("%d %d",&d,&m);
	printf("%s\n",dan[(d+mjesec[m-1]-1)%7]);
}
