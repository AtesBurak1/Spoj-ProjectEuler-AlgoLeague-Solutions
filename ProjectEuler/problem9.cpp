#include <iostream>
#include <cmath>
using namespace std;

int ifInt(double x)
{
	if(x==(int)x)
		return 1;
		
	return 0;
}

int main()
{
	int a,b;
	double c;
	int flag=2;
	for(a=1;a<400;a++)
	{
		for(b=a+1;b<401;b++)
		{
			c= sqrt(pow(a,2)+pow(b,2));
			if(ifInt(c)) // I got an error so I have to check integer numbers
			{
			
				cout << a << " " << b << " " << c << endl;
				cout << a + b + c<< endl << endl;
			}
			if(a+b+sqrt(pow(a,2)+pow(b,2))==1000.0)
			{
				c= sqrt(pow(a,2)+pow(b,2));
				cout << a << " " << b << " " << c << endl;
				long int k=a*b*c;
				cout <<k;
				flag=1;
				break;
			}
		}
		
		if(flag==1)
			break;
	}
	
	return 0;
}
