#include<iostream>
#include<stack>
using namespace std;
int main(){
	char sentence;
	stack<char>stack1;
	stack<char>stack2;
	int k;
		while(1){
			sentence=getchar();
			
			if(sentence=='(')
			{
				stack1.push(sentence);
				k=1;
				
			}
			else if(sentence==')')
			{
				k=0;
				if(stack1.empty()==true)
				{
					while(!sentence=='.')
					{
						sentence=getchar();
						
					}	
					cout<<"no"<<'\n';
					break;
				}
				
				stack1.pop();
			}
			else if(k==1&&sentence==']')
			{
					while(!sentence=='.')
					{
						sentence=getchar();
						
					}	
					cout<<"no"<<'\n';
					break;
			}
			else if(sentence=='[')
			{
				stack2.push(sentence);
				k=2;
			}
			else if(sentence==']')
			{
				k=0;
				if(stack2.empty()==true)
				{
					while(!sentence=='.')
					{
						sentence=getchar();
						
					}	
					cout<<"no"<<'\n';
					break;
				}
				
				stack2.pop();
			}
			else if(k==2&&sentence==')')
			{
				
					while(!sentence=='.')
					{
						sentence=getchar();
						
					}	
					cout<<"no"<<'\n';
					break;
			}
			else if(sentence=='.')
			{
				if(stack1.empty()&&stack2.empty()==true)
				{
					cout<<"yes"<<'\n';
				}
				else
				{
					while(!stack1.empty()==true)
					{
						stack1.pop();
					}
					while(!stack2.empty()==true)
					{
						stack2.pop();
					}
					cout<<"no"<<'\n';
				}
				break;
			}
			
		
		}
		
	}
	