#include <iostream>
#include <cmath>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;

using namespace std;


int main()
{
	int1024_t k =(int)pow(2,1000);
	int1024_t sum=0;
	while(k>0)
	{
		sum+=k%10;
		k=k/10;
	}
	cout << sum;
	
	return 0;
}
