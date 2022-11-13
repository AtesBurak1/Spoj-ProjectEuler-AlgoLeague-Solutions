#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,min,sum=0;
    cin >> n;
    vector <char> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
   	
   	for(int i=0; i<n-1;i++)
   	{
   		if(a[i]==a[i+1])
   		{
   			a.erase(a.begin()+i);
   			i--;
   			n--;
		}
	   }
	for(int i=0; i<n;i++)
	{
		cout << a[i];
	}
    return 0;
}
