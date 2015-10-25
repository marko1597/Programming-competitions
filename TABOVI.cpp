#include <cstdio>

int main(){
	int n[1000],p[1000],nu;
	scanf("%d",&nu);
	for(int x=0;x<nu;x++){
		scanf("%d",&n[x]);
	}
	for(int x=0;x<nu;x++){
		scanf("%d",&p[x]);
	}
	int sm=-50,koraci=0,jed=0;
	while(true){
		for(int x=0;x<nu;x++){
			if(n[x]>p[x]){
				jed+=1;
				p[x]+=1;
				if(sm!=1){
					koraci+=1;
				}
				sm=1;
			}else if(n[x]<p[x]){
				jed+=1;
				p[x]-=1;
				if(sm!=-1){
					koraci+=1;
				}
				sm=-1;
			}else if(n[x]==p[x]){
				if(sm!=0){
					int zlj=0;
					for(int c=0;c<nu;c++){
						if(zlj!=0)break;
						if(n[c]!=p[c]){
							zlj+=1;
						}
					}
					if(zlj!=0){
						koraci+=1;
					}
				}
				sm=0;
			}
		}
		if(jed==0){
			break;
		}
		jed=0;
	}
	printf("%d",koraci-1);
}
