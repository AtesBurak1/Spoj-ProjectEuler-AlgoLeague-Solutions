#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main(){
	
	string s;
	cin >> s;
	int i, size=s.length(),ans=0;
	unsigned long long k = 1;
	for(i =size-1; i >= 0; i--){
		ans = (ans + (k*( (s[i] - '0') * ( i + 1 ) ) )%mod) % mod;
		k*=10;
		k++;
		k%=mod;
	}
	cout << ans;
	
	return 0;
}
