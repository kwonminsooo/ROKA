#include<iostream>

int main(){
	int lucky_number=3;
	int user_number;
	while(1){
	std::cout<<"내 비밀 수를 맞추어 보세요~"<<std::endl;
	std::cout<<"입력: ";
	std::cin>>user_number;
	if(user_number==lucky_number){
		std::cout<<"맞추셨습니다~~"<<std::endl;
		break;
	}
	else{
		std::cout<<"다시 생각해보세요~"<<std::endl;
	}
	}
	return 0;
}