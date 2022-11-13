#include <bits/stdc++.h>

#define ll 				long long int
#define ull 			unsigned long long int
#define MAXN 			1000000007
#define F 				first
#define S 				second
#define pb 				push_back
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

vector <int> siev(int n)
{
	vector <int> sieve;
	sieve.pb(2);
	int x=sqrt(n);
	for(int i=3;i<=x;i++)
	{	int k=2,flag=0;
		while(k<i/2)
		{
			if(i%k==0)
			{
				flag=1;
				break;
			}
			k++;
		}
		if(flag==0)
		{
			sieve.pb(i);
		}
		
	}
	return sieve;
}
int solve(int n, vector<int> pr)
{
	int flag;
	//vector <int> sieve=siev(n);
	vector <int> nums;
	for(int i=1;i<=n;i++)
	{	flag=1;
		for(int k=0;k<pr.size();k++)
		{
			if(!(i&pr[k]))
			{
				flag=0;
				break;
			}
		}
		if(flag)
		{
			nums.push_back(i);
		}
	}
	
	return nums.size();
}


int main()
{
	int n,m,num;
	vector <int> pr;
	cin >> n >> m;
	while(m--)
	{
		cin >> num;
		if(num<=n)
		{
			pr.push_back(num);
		}
	}
	cout << solve(n,pr);
	return 0;
}
