#include<iostream>
using namespace std;


int main(){
	int k=0;
	int j=0;
	int n;
	cin>>n;
	fib(n);
	fibonacci(n);
	cout<<k<<j;
}
	
int	fib(n) {
    if (n = 1 or n = 2)
    then return 1;
    else
	{
		return (fib(n - 1) + fib(n - 2));
		k++;
	}
	return k;
}
		
int fibonacci(n) {
    f[1] <- f[2] <- 1;
    for i <- 3 to n
        f[i] <- f[i - 1] + f[i - 2]; j++;
    return j;
}
	
}
	
}