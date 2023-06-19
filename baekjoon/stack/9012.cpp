#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<char>stack;
	int total_number;
	char pt;
	cin>>total_number;
	for(int i=0;i<total_number;i++)
	{
		while(true)
		{
			pt=getchar();
			
			if(pt == '\n')
			{
				break;
			}
			
			
			if(pt=='(')
			{
				stack.push(pt);
			}
			else if(pt==')')
			{
				if(stack.empty()==true)
				{
					cout<<"NO";
					
					break;
				}
				else
				{
					stack.pop();
				}
			}

		}	
		if(stack.empty()==true)
		{
			cout<<"YES"<<'\n';
		}
		else
			cout<<"NO"<<'\n';
	}
}