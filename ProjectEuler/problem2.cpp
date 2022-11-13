#include <iostream>
#include <cmath>
#define M 4000000
int main()
{
	
	long long int n1=1,n2=2,temp,sum=0;
	while(n2<M)
	{
		if(n2%2==0)
			sum+=n2;
		temp=n1+n2;
		n1=n2;
		n2=temp;
	}
	std::cout<< sum;
	return 0;
}
