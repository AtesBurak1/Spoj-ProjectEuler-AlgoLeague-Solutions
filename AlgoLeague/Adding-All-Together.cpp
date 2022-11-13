#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,min,sum=0,j=1,i=0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
    {
    	cin >> a[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		int multi=i+1;
		for(int j=i;j>=0;j--)
		{
			sum+=a[j]*multi;
			multi--;
		}
	}

	cout << sum;
    return 0;
}
