#include<iostream>
using namespace std;
int main(){
	int n;
	long long dp[90];
	cin>>n;
	
	dp[0]=0;
	dp[1]=1;
	
	for(int i=2;i<n+1;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	cout<<dp[n];
	
	
}