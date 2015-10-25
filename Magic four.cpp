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

char rjec[11000];
int p=1;
struct trie{
	short int niz['z'-'a'];
	short int poz;
	trie(){
		memset(niz,-1,sizeof niz);
		poz=0;
	}
};
trie tree[60000];
int newone(){
	return p++;
}
void insert(char* s1){
	int siz=strlen(s1);
	for(int x=0;x<siz-3;x++){
		int stao=0;
		for(int y=0;y<4;y++){
			if(tree[stao].niz[s1[x+y]-'a']==-1)
				tree[stao].niz[s1[x+y]-'a']=newone();
			stao=tree[stao].niz[s1[x+y]-'a'];
		}
		if(!tree[stao].poz)
			tree[stao].poz=x+1;
	}
}
int trazi(char* s1){
	int stao=0;
	for(int x=0;x<4;x++){
		stao=tree[stao].niz[s1[x]-'a'];
	}
	return tree[stao].poz;
}
int main(){
	scanf("%s",rjec);
	insert(rjec);
	int n;
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%s",rjec);
		printf("%d\n",trazi(rjec));
	}
}
