#include<iostream>
#include<stack>
using namespace std;
int main(){
	int N,k;
	stack<int>stack;
	cin>>N;
	int dp[11];
	int print[100];
	dp[0]=1;dp[1]=2;dp[2]=4;
	for(int i=0;i<N;i++)
	{
		cin>>k;
		for(int j=3;j<k;j++)
		{
			dp[j]=dp[j-3]+dp[j-2]+dp[j-1];
		}
		print[i]=dp[k-1];
	}
	for(int m=0;m<N;m++){
		cout<<print[m]<<"\n";
	}
}