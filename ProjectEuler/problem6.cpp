#include <iostream>
#include <cmath>

int main()
{
	int n=1;
	int i,sum1=0,sum2=0;
	for(i=1;i<=100;i++)
		{
			sum1+= pow(i,2);
		}
		
	sum2= pow(100*101/2,2);
	std::cout << sum2-sum1;
	return 0;
}
