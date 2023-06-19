#include<iostream>
#include<stack>


using namespace std;
int main(){
	stack<int>stack;
	
	int total_number,i,money;
	int sum=0;
	cin>>total_number;
	for(i=0;i<total_number;i++)
	{
		cin>>money;
		if(money==0)
		{
			stack.pop();
		}
		else
		{
			stack.push(money);
		}
		
	}
	
	
	while(!stack.empty())
	{
		sum+=stack.top();
		stack.pop();
		
	}
	cout<<sum;
	
}