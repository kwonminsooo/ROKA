#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	cout<<"str :"<<str<<'\n';
	getline(cin,str,'d');
	cout<<"str :"<<str<<'\n';
	cin>>str;
	cout<<"str :"<<str<<'\n';
}