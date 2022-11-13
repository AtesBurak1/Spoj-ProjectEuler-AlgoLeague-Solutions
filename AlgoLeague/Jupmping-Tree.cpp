
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
	int t,num,sum=0,num2;
	string s,te;
	cin >> t;
	while(t--)
	{
		cin >> num;
		num2=ifPalindrome(num);
		sum+=num2-num;
			}
	cout << sum;


	return 0;
}

