#include <iostream>
#include <cmath>
int findSumOfDivisiors(int x)
{
	int i=1,sum=0,k;
	if(x%2==0)
		k=x/2;
	else
		k=(x+1)/2;
	while(i<=k)
	{
		if(x%i==0)
			sum+=i;
		i++;
	}
	return sum;
}

int main()
{
	int num = 1,sumOfFirstDivisiors,sumOfSecondDivisiors,sum=0;

	while(num<10000)
	{
		sumOfFirstDivisiors= findSumOfDivisiors(num);
		if(sumOfFirstDivisiors!=num)
		{
			sumOfSecondDivisiors=findSumOfDivisiors(sumOfFirstDivisiors);
			if(sumOfSecondDivisiors==num)
				sum=sum + num + sumOfSecondDivisiors;
		}
		num++;
	}
	std::cout << sum/2;

	return 0;
}
