#include <cstdio>
#include <cstring>
#include <iostream>
#include <math.h>
#include <cmath>
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

struct trie{
	int left,right;
	char slovo;
	bool ima;
};
trie node[500];
char ttt;
char bitset[100];
int s=0,start;
int newone(){
	node[s].ima=false;
	node[s].left=-1;
	node[s].right=-1;
	node[s].slovo=0;
	return s++;
}
void insert(){
	int stao=start;
	for(int x=0;x<strlen(bitset);x++){
		if(bitset[x]=='0'){
			if(node[stao].left==-1){
				node[stao].left=newone();
			}
			stao=node[stao].left;
		}else if(bitset[x]=='1'){
			if(node[stao].right==-1){
				node[stao].right=newone();
			}
			stao=node[stao].right;
		}
	}
	node[stao].ima=true;
	node[stao].slovo=ttt;
}
void trazi(){
  char c=0;
  int stao=start;
  while(c!='0' && c!='1'){
    c=getchar();
  }
  while(c=='0' || c=='1'){
    if(c=='0'){
      stao=node[stao].left;
    }else if(c=='1'){
      stao=node[stao].right;
    }
    if(node[stao].ima==true){
      putchar(node[stao].slovo);
      stao=start;
    }
    c=getchar();
  }
}
int main(){
	start=newone();
	int n;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%s %s",&ttt,bitset);
		insert();
	}
	trazi();
	printf("\n");
}
