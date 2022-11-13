//Brace your keyboard
//inzva community built algoleague for every algorithm enthusiast hungry for self-improvement and friendly competition. Have fun and good luck!

#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

int main() {
    int n, a, b;
    
    cin >> n; 
    
    while(n--)
    {
        cin >> a;
        vector<int> dp(a + 200000);
    
    dp[0] = 1;
    
    for (int i = 0; i <= a; i++) {
        dp[i + 2] = (dp[i] + dp[i + 2]) % mod;
        dp[i + 1] = (dp[i] + dp[i + 1]) % mod;
    }
    double sum=dp[a];
    for(int i=1;i<=a;i++)
    {
    	sum=sum/i;
	}
    printf("%.6lf\n",sum);
    }

	return 0;
}
