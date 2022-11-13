#include <iostream>

using namespace std;
int ifPrime(int n) // checking if it is prime or not
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
	int n=2,prime;
	int i=0;
	while(i<=10001) // finding the 10001th prime
	{
		if(ifPrime(n)){
			prime=n;
			i++;
		}
		n++;
	}
	cout << prime;
	
	return 0;
}
