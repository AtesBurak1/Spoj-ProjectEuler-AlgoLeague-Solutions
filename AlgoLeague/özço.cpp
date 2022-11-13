#include <iostream>
#include <string>

#define ll long long int
using namespace std;
int main()
{
    int t;
    ll sum=0,k=0,l=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        string rev=s;
        if(s.size()==1)
            continue;
        for(int i=n/2;i<n;i++)
        {
            rev[i]=rev[n-i-1];
        }
        if(rev>=s)
        {
            k=0,l=0;
            for(int i=0;i<n;i++)
            {
                l*=10;
                k*=10;
                l+=rev[i]-'0';
                k+=s[i]-'0';
            }
            sum+=l-k;
            continue;
        }
        int m=(n-1)/2;
        for(int i=m;i>=0;i--)
        {
            if(rev[i]!='9')
            {
                rev[i]+=1;
                break;
            }
            else
            {
                rev[i]='0';
            }
        }
        for(int i=n/2;i<n;i++)
        {
            rev[i]=rev[n-i-1];
        }

        k=0,l=0;
            for(int i=0;i<n;i++)
            {
                l*=10;
                k*=10;
                l+=rev[i]-'0';
                k+=s[i]-'0';
            }
            sum+=l-k;

    }
    cout << sum;
    return 0;
}
