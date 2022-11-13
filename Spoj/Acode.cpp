#include <bits/stdc++.h>

using namespace std;

int main(){
	long long dp[5010];
	dp[0] = 1;
	dp[1] = 1;
	for(int i =2; i < 5010; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	while(true){
	    string n;
		cin >> n;	
		if(n[0]=='0')
			break;
		long long count =0;
		long long ans=1;
		for(int i=0;i < n.length()-1;i++){
			if(n[i] == '2' &&  n[i+1] <= '6' && n[i+1] != '0' ){
			    	count++;
			    	//cout << "counted" << endl;
			}

			else if(n[i] == '1' && n[i+1] != '0'){
			    	count++;
			    	//cout << "counted" << endl;
			}
			else{
				if(n[i+1] == '0' )
					count--;
			    ans *=dp[count+1];
			    //cout << "Count :" << count << endl;
			    count=0;
			}
		}
		if(count != 0)
		    ans *=dp[count+1];
		cout << ans << endl; 
	}
	
	return 0;
}
