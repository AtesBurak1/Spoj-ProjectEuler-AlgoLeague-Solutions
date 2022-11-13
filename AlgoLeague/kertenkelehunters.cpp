#include <iostream>
#include <vector>
#define INF 1000000007
using namespace std;

#define MOD 1000000007

int main(){

    int n,arr[100001],q,type;
    cin >> n;
    for(int i=0;i<n;i++)
    {
    	cin >> arr[i];
	}
	cin >>q;
	while(q--)
	{
		cin >> type;
		if(type==1)
		{
			int x,y,min=10000007;
			cin >> x >> y;
			for(int i=x-1;i<y;i++)
			{
				if(arr[i]<min)
					min=arr[i];
			}
			cout << min << endl;
			
		}
		else
		{
			int a,b,c;
			cin >> a >> b >> c;
			for(int i=a-1;i<b;i++)
			{
				arr[i]+=c;
			}
		}
	}


    return 0;
}
