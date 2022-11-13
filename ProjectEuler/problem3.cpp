#include <iostream>
#include <cmath>

int ifPrime(long int n)
{
	int divisior=2;
	while(divisior<n/2)
	{
		if(n%divisior==0)
			return 0;
		divisior++;	
	}
	return 1;
}

int main()
{
	long int max,num2;
	long long int num=600851475143;
	long int n=2;
	while(n<num/2+1)
	{
		if(num%n==0)
		{
			if(ifPrime(n)) // find all primes which can divide num without any remainder
				max=n;
		}
		n++;
	}
	
	
	std::cout << max;
	
	return 0;
}

