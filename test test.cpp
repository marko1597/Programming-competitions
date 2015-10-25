#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <memory.h>
 
using namespace std;
 
int dp[10000][50];
 
int tree[100002];
 
const int MOD=5000000;
 
int arr[10000];
 
void add(int pos, int val)
{
	while(pos<100002)
	{
		tree[pos]= (tree[pos]+val)%MOD;
		pos += (pos & -pos);
	}
}
 
int read(int a, int b)
{
	if(a==0)
	{
		int pos =b;
		int ret = 0;
		while(pos>0)
		{
			ret = ret +tree[pos];
			pos -= (pos & -pos);
		}
		
		return ret%MOD;
	}
	else
	{
		
		return (read(0,b)-read(0,a-1)+MOD)%MOD;
	}
}
 
int main()
{
	
	int N;
	int K;
	
	scanf("%d %d",&N,&K);
	
	for(int n=0;n<N;n++)
	{
		scanf("%d",&arr[n]);
	}
	
	// do the first dp
	
	for(int n=0;n<N;n++)
	{
		dp[n][0]=1;
	}
	
	for(int k=1;k<K;k++)
	{
		memset(tree,0,sizeof(tree));
		
		dp[N-1][k]=0;
		
		for(int n=N-2;n>=0;n--)
		{
			
			add(arr[n+1],dp[n+1][k-1]);
			dp[n][k]=read(arr[n]+1,100001);
			//cout<<"read :"<<"n : "<<n<<" k : "<<k<<" "<<dp[n][k]<<endl;
		}
	}
	
	int sol =0;
	
	for(int n=0;n<N;n++)
	{
		sol=(sol+dp[n][K-1])%MOD;
	}
	
	printf("%d\n",sol);
		
	system("pause");
	
}
