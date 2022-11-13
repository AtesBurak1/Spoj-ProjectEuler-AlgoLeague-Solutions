#include <iostream>
#include <cmath>

int division(int x)
{
	if(x%3==0)
		return 1;
	else if(x%5==0)
		return 1;
	return 0;
}

int main()
{
	int n=0,sum=0;
	while(n<1000)
	{
		if(division(n))
			sum+=n;
		n++;
	}
	std::cout<< sum;
	
	return 0;
}
