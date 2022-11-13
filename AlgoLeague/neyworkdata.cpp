#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	
  int q,s,k,sum=0;
  string str;
  cin >>q;
  while(q--)
  {
  	sum=0;
  	cin>>s>>k;
  	for(int i=0;i<s;i++)
  	{
  		cin>>str[i];
	  }
	for(int i=0;i<s/2;i++)
	{
		if(str[i]!=str[s-i-1])
		{
			str[s-i-1]=str[i];
			sum++;
		}
	}
		for(int i=0;i+k<s/2;i+=k)
	{
		if(str[i]!=str[i+k])
		{
			str[s+k]=str[i];
			sum++;
		}
	}
	cout<<sum << endl;
  }
	
	
	return 0;
}
