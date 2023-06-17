#include<iostream>
#include<stack>
#include<string>

using namespace std;




int main(){
	
	int total_number;
	cin>>total_number;
	
	string text;
	stack<int> stack;
	int num;
	int i=0;
	while(i<total_number)
	{
		
		cin>>text;
		
		if(text=="push")
		{
			cin>>num;
			stack.push(num);
		}
		else if(text=="pop")
		{
			if(stack.empty()==1)
			{
				cout<<-1<<'\n';
			}
			else
			{
				cout<<stack.top()<<'\n';
				stack.pop();
			}
			
	
		}
		else if(text=="top"){
				if(stack.empty()==1)
			{
				cout<<-1<<'\n';
			}
			else{
				cout<<stack.top()<<'\n';
			}
		}
		else if(text=="size"){
			cout<<stack.size()<<'\n';
			
		}
		else if(text=="empty"){
			if(stack.empty()==true)
			{
				cout<<1<<'\n';
			}
			else
			{
				cout<<0<<'\n';
			}
		}
	i++;	
	}
	
	
	
	
}