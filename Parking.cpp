#include <cstdio>

int main(){
	int a,b,c,ans=0;
	int m1[3],n1[3];
	scanf("%d %d %d",&a,&b,&c);
	for(int x=0;x<3;x++){
		scanf("%d %d",&m1[x],&n1[x]);
	}
	int kam=0;
	for(int x=0;x<200;x++){
	    for(int y=0;y<3;y++){
		    if(x>=m1[y] && x<=n1[y]-1)kam++;
		}
		if(kam==1)ans+=a;
		if(kam==2)ans+=b*2;
		if(kam==3)ans+=c*3;
		kam=0;
	}
	printf("%d\n",ans);
}
