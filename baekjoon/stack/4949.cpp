#include<iostream>
#include<stack>
using namespace std;
int main(){
	char sentence;
	stack<char>stack;
	sentence=getchar();
		while(1){
			sentence=getchar();
			if(sentence=='('||sentence=='[')
			{
				stack.push(sentence);
			}
			else if(sentence==')'||sentence==']')
			{
				if(stack.empty()==true)
				{
					while(!sentence=='.')
					{
						sentence=getchar();
						
					}	
					cout<<"no"<<'\n';
					break;
				}
				stack.pop();
			}
			else if(sentence=='.')
			{
				if(stack.empty()==true)
				{
					cout<<"yes"<<'\n';
				}
				else
				{
					while(!stack.empty()==true)
					{
						stack.pop();
					}
					cout<<"no"<<'\n';
				}
				break;
			}
		}
		
	}
	