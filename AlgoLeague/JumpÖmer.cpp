#include <iostream>
#include <vector>
#define INF 1000000007
using namespace std;
// toplayarak gitme mantýðý ile çalýþýyor örneðin path 4 ise b 2 ise 2 de 1 farklý þekilde gidebiliyor 4 olduðunda ise en az i-b yani 4-2 =2 dp[2]=1 farklý þekilde giderek ilerliyor!!!

int main(){

    int n, a, b;
    cin >> n >> a >> b;

    vector<int> dp(n+1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++){
        if ( i >= a)
            dp[i] += dp[i - a] % MOD;
        if ( i >= b)
            dp[i] += dp[i - b] % MOD;
        dp[i] %= MOD;
    }

    cout << dp[n] << endl;


    return 0;
}
