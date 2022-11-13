#include <iostream>

using namespace std;

int main()
{
	long long unsigned int n,num,fact=1;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin>> num;
		fact=1;
			while(num>1)
			{
				fact*=num;
				num--;
			}
			cout << fact << endl;
	}
	return 0;
}
