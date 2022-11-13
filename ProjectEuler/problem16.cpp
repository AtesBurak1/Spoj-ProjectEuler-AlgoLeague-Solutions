#include <iostream>
#include <cmath>



int main()
{
	long long int num=pow(2,1000);

	int sum=0;
	while(num>0)
	{
		sum+=num%10;
		num=num/10;
	}
	std::cout << sum;
	
	return 0;
}

