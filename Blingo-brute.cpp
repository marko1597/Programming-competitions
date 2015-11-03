#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>
#include <stack>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <list>
#include <ctime>
#include <algorithm>
using namespace std;

class Blingo {
public:
	Blingo() {
	}
	void u(int X) {
		fen.push_back(X);
	}
	int n(int A, int B, int K) {
	    sort(fen.begin(), fen.end());
        for( int i = 0; i < fen.size(); i++ ){
            if( fen[i] >= A && fen[i] <= B )
                K--;
            if( K == 0 )
                return fen[i];
        }
        return -1;
	}
private:
	vector<int> fen;
};

int main(){
	int n, k, a, b, c;
	char in[20];
	scanf("%d", &n);
	Blingo app = Blingo();
	for (int i = 0; i < n; i++) {
		scanf("%s", in);
		if (in[0] == 'u') {
			scanf("%d", &a);
			app.u(a);
		} else {
			scanf("%d %d %d", &a, &b, &c);
			int t = app.n(a, b, c);
			if (t != -1)
				printf("%d\n", t);
			else
				printf("NEMA\n");
		}
	}
}
