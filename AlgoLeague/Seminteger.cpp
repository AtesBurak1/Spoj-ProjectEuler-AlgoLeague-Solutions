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

int solve(int n,int a)
{	int sum=0;
	if(n==pow(a,2))
		return -1;
	for(int j=a;abs(j+a)<=abs(n-j*j);j++)
	{
		if(j==-1*a)
			continue;
		if((n-j*j)%(j+a)==0)
			sum++;
	}
	for(int j=a-1;abs(j+a)<=abs(n-j*j);j--)
	{
		if(j==-1*a)
			continue;
		if((n-j*j)%(j+a)==0)
			sum++;
	}
	return sum;
}



int main()
{
	int n,a;
	cin >> n >> a;
	cout << solve(n,a);
	return 0;
}
