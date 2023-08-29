#include<iostream>
using namespace std;

int max(int a,int b){
	if(a>b)
	{
		return a;
	}
	else
		return b;
}
int main()
{
	int N;
	int map[300];
	int dp[300];
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		cin>>map[i];
	}
	dp[1]=map[1];
	dp[2]=map[1]+map[2];
	dp[3]=max(map[1],map[2])+map[3];
	for(int k=4;k<=N;k++)
	{
		dp[k]=max(dp[k-3]+map[k-1],dp[k-2])+map[k];
	}
	cout<<dp[N];
}