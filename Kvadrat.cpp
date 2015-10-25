#include <cstdio>
#include <cstring>
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <time.h>
#include <string.h>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main(){
	int ploca[3][3],br,sum;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&ploca[i][j]);
	for(int i=0;i<3;i++)
		if((ploca[i][0]==0)+(ploca[i][1]==0)+(ploca[i][2]==0)==0)
			sum=ploca[i][0]+ploca[i][1]+ploca[i][2];
	for(int j=0;j<3;j++)
		if((ploca[0][j]==0)+(ploca[1][j]==0)+(ploca[2][j]==0)==0)
			sum=ploca[0][j]+ploca[1][j]+ploca[2][j];
	if((ploca[0][0]==0)+(ploca[1][1]==0)+(ploca[2][2]==0)==0)
		sum=ploca[0][0]+ploca[1][1]+ploca[2][2];
	if((ploca[0][2]==0)+(ploca[1][1]==0)+(ploca[2][0]==0)==0)
		sum=ploca[0][2]+ploca[1][1]+ploca[2][0];
	if(sum==0){
		for(int i=0;i<3;++i)
			for(int j=0;j<3;++j)
				sum+=ploca[i][j];
		sum/=2;
	}
	for(int ponavljaj=0;ponavljaj<3;ponavljaj++){
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++){
				if((ploca[i][j]==0)&&(ploca[i][0]==0)+(ploca[i][1]==0)+(ploca[i][2]==0)==1)
					ploca[i][j]=sum-ploca[i][0]-ploca[i][1]-ploca[i][2];
				if((ploca[i][j]==0)&&(ploca[0][j]==0)+(ploca[1][j]==0)+(ploca[2][j]==0)==1)
					ploca[i][j]=sum-ploca[0][j]-ploca[1][j]-ploca[2][j];
			}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(j)printf(" ");
			printf("%d",ploca[i][j]);
		}
		printf("\n");
	}
}
