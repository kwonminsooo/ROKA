#include<iostream>

int change_val(int&p){//p는 number의 참조자이다.
	p=3;
	
	return 0;
}
int main(){
	int number=5;
	
	std::cout<<number<<std::endl;
	change_val(number);
	std::cout<<number<<std::endl;
	
}