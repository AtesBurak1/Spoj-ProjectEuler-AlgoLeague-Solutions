#include <iostream>

using namespace std;
int pow(int a, int b){
    if(b==0) return 1;
    int ret = pow(a,b/2);
    ret *= ret;
    if(b&1) ret *= a;
    return ret%10;
}
int main(){
	
	int n;
	cin >> n;
	while(n--){
		int a,b;
	cin >> a >> b;
	a%=10;
	long ans = pow(a,b);
	cout << (ans % 10) << endl;
	}
	return 0;
}
