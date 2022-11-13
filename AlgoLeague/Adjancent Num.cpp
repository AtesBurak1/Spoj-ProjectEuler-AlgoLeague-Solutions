#include <bits/stdc++.h>

#define ll 				long long int
#define ull 			unsigned long long int
#define MAXN 			1000000007
#define F 				first
#define S 				second
#define pb(x) 			push_back(x)
#define ppb() 			pop_back()
#define mp(x,y)			make_pair(x,y)
#define sz(x) 			((int) x.size())
#define all(p)			p.begin(),p.end()
#define ld 				long double
#define print(a)        for(auto x : a) cout << x << " "; cout << endl
#define print1(a)       for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)   for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << end

using namespace std;

typedef pair<int,int> PII;
template<class T>bool umin(T& a,T b){if(a>b){a=b;return 1;}return 0;}
template<class T>bool umax(T& a,T b){if(a<b){a=b;return 1;}return 0;}





int main()
{
    int n,num,flag=0;
    stack <int> st;
    cin >> n;
    for(int i=0;i<n;i++)
    {
    	cin >> num;
		if(st.empty())
			st.push(num);
		else if(st.top()!=num)
			st.push(num);
		else
			st.pop();
	}

    if(!st.empty())
        cout << "No";
    else
        cout << "Yes";
	return 0;
}
