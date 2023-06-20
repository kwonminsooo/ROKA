#include<iostream>
#include<stack>

using namespace std;
int main(){
	int total_number;
	char pt;
	cin>>total_number;
	getchar();
	for(int i=0;i<total_number;i++)
	{	stack<char>stack;
		while(1)
		{
			pt=getchar();
			if(pt=='(')
			{
				stack.push(pt);
			}
			else if(pt==')'){
				if(stack.empty()==true)
				{
					cout<<"NO"<<'\n';
					while(pt!='\n')
					{
						pt=getchar();
					}
					break;
				}
				stack.pop();
			}
			else if(pt=='\n')
			{
				if(stack.empty()==true)
				{
					cout<<"YES"<<'\n';
				}	
				else
				{
					cout<<"NO"<<'\n';
					while(!stack.empty())
					{
						stack.pop();
					}
				}
				
			}
		}
	}
}