#include<iostream>
using namespace std;

int Min(int a,int b){
	if(a<=b)
	{
		return a;
	}
	else
		return b;
}
int main()
{
	int N,i;
	cin>>N;
	int dp[1000000];
	dp[0]=0,dp[1]=0;
	for(i=2;i<=N;i++)
	{
		dp[i]=dp[i-1]+1;
		if(i%3==0)
		{
			dp[i]=Min(dp[i],dp[i/3]+1);
		}
		if(i%2==0)
		{
			dp[i]=Min(dp[i],dp[i/2]+1);
		}
	}
	cout<<dp[N]<<"\n";
}