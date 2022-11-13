#include <iostream>
#include <cmath>

int ifPrime(long int n,int arr[],int k)
{
	int i=0;
	while(i<k)
	{
		if(n%arr[i]==0)
			return 0;
		
		i++;
	}
	return 1;
}

int main()
{
	long int n=3;
	long long sum=2;
	int arr[1000000]={};
	arr[0]=2;
	int i=1,k=1;
	while(n<2000000)
	{
		if(ifPrime(n,arr,k))
		{
		    k+=1;
			sum+=n;
			arr[i]=n;
			i++;
		}
		
		n+=2;	
	}
	std::cout << sum;
	
	return 0;
}

