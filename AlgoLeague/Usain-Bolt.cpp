#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,num2,num,count=0;
    cin >> n;
    cin >>num;
    for(int i = 1; i < n; i++)
	{
		cin >> num2;
		if(num2>num)
		{
			num=num2;
			count++;
		}
	}
   	
	cout << count;

    return 0;
}
