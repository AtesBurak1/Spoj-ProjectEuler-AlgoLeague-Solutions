#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,min,sum=0;
    cin >> n;
    vector<int> a(n);
    cin >> a[0];
    min=a[0];
    for(int i = 1; i < n; i++) cin >> a[i];
    for(int i= 0; i< n;i++)
    {
    	if(a[i]<min)
    		min=a[i];
    	sum+=a[i];
	}
	cout << sum-min;
    return 0;
}
