#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <stack>
#include <string>
#include <map>
#include <queue>
#include <list>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

typedef long long int llint;

#define M 105

int mat[M][M];
int frend[M][M];
int tfrend[M][M];
int bio[M];
int n;

queue<pair<int, int> > q;
void ffriends(){
	memset(frend, 0, sizeof frend);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (mat[i][j]){
				frend[i][j] = 1;
				q.push(make_pair(i, j));
			}

	int a, x;
	while (!q.empty()){
		a = q.front().first;
		x = q.front().second;
		q.pop();

		for (int i = 0; i < n; i++)
			if (mat[x][i] && !frend[a][i]){
				frend[a][i] = 1;
				q.push(make_pair(a, i));
			}
	}
}
queue<list<int>::iterator >erase;
void f2friends(){
	list<int> li[M];
	memset(frend, 0, sizeof frend);
	for (int i = 0; i < n; i++){
		li[i].clear();
		for (int j = 0; j < n; j++)
			if (mat[i][j]){
				frend[i][j] = 1;
				q.push(make_pair(i, j));
			}else{
				li[i].push_back(j);
			}
	}
	int a, x;

	while (!q.empty()){
		a = q.front().first;
		x = q.front().second;
		q.pop();

		for (list<int>::iterator i = li[a].begin(); i != li[a].end(); i++){
			if (mat[x][*i]){
				frend[a][*i] = 1;
				q.push(make_pair(a, *i));
				erase.push(i);
			}
		}
		while (!erase.empty()){
			li[a].erase(erase.front());
			erase.pop();
		}
	}
}
void ftfriends(){
	memset(tfrend, 0, sizeof tfrend);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (frend[i][j] && frend[j][i])
				tfrend[i][j] = 1;
}
int dfs(int i){
	if (bio[i])
		return 0;
	bio[i] = 1;
	for (int j = 0; j < n; j++){
		if (tfrend[i][j]){
			dfs(j);
		}
	}
}
int count_groups(){
	memset(bio, 0, sizeof bio);
	int ret = 0;
	for (int i = 0; i < n; i++){
		if (!bio[i])
			dfs(i),ret++;
	}
	return ret;
}
int main(){
	int t;
	char in[M];
	/*while (1){
		scanf("%d", &n);
		memset(mat, 0, sizeof mat);
		for (int i = 0; i < n; i++){
			scanf("%s", in);
			for (int j = 0; j < n; j++)
			if (in[j] == 'Y')
				mat[i][j] = 1;
		}
		ffriends();
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				printf("%d", frend[i][j]);
			}
			putchar('\n');
		}
		putchar('\n');
		f2friends();
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				printf("%d", frend[i][j]);
			}
			putchar('\n');
		}
		putchar('\n');
	}*/
	scanf("%d", &t);
	while (t--){
		scanf("%d", &n);
		memset(mat, 0, sizeof mat);
		for (int i = 0; i < n; i++){
			scanf("%s", in);
			for (int j = 0; j < n; j++)
				if (in[j] == 'Y')
					mat[i][j] = 1;
		}
		f2friends();
		ftfriends();
		printf("%d\n",count_groups());

		/*for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				printf("%d", frend[i][j]);
			}
			putchar('\n');
		}
		putchar('\n');
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				printf("%d", tfrend[i][j]);
			}
			putchar('\n');
		}
		putchar('\n');*/
	}
}
