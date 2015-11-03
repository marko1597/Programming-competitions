#include<cstdio>
#include<vector>

using namespace std;

#define MAXN (2<<23)

int offset = MAXN;

vector<int> T[2*offset];
void fill(){
    int n;
    scanf("%d",&n);
    for(int x=0;x<n;x++)
        T[x+offset] = 0;
    for(int x=offset-1;x>0;x--){
        T[x]=T[x*2];
	}
}
void update(int i,int val){
    i--;
    T[ offset + i ].push_back( val );
    for(int x = ( offset + i ) / 2; x > 0; x /= 2){
        for( int j = 0; j < T[x*2].size(); j++)
            T[x].push_back(T[x*2][j]);
        for( int j = 0; j < T[x*2+1].size(); j++)
            T[x].push_back(T[x*2+1][j]);
    }
}
vector<int> query(int a,int b,int p=1, int lo = 0,int hi = offset){
}
int main(){

}
