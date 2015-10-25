#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <stack>
using namespace std;

stack<int> road;

int main(){
	int n, br, ans, p;
	while (1){
		ans = p = 1;
		while (road.size())
			road.pop();
		scanf("%d", &n);
		if (!n)
			break;
		for (int i = 0; i < n; i++){
			scanf("%d", &br);
			while (road.size() && p == road.top() ){
				p++;
				road.pop();
			}
			if (br != p && (!road.size() || road.top() > br))
				road.push(br);
			else if (br == p)
				p++;
			else
				ans = 0;
		}
		while (road.size() && ans){
			if (p == road.top()){
				p++;
				road.pop();
			}else
				ans = 0;
		}
		if (ans)
			printf("yes\n");
		else
			printf("no\n");
	}
}
