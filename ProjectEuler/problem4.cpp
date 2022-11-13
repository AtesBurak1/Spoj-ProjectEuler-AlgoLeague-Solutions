#include <iostream>
#include <cmath>
int check(int n)
{
	int temp=n,count=0;
	while (temp>0)
	{
		count++;
		temp/=10;
	}
	while(n>0)
	{
		int first=n/pow(10,count-1);
		int last=n%10;
		if(first!=last)
			return 0;
		n=n-first*pow(10,count-1);
		n=n/10;
		count-=2;
	}
	return 1;
}
int main()
{
	int num,max=0;
	int i;
	int flag=1;
	for(num=999;num>=100;num--)
	{
	for(i=0;i<899;i++)
	{
		if(check(num*(num-i))){
			
			if(max<num*(num-i) )
			{
				max= num*(num-i);
				break;
			}
		}
}
}
std::cout << max;
	
	return 0;
}
