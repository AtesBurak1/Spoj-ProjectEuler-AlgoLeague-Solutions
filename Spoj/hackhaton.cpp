#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main()
{
	long long int h=1,w=0; // 1 up 2 right
	long long int count1=0, count2=0;
	string girdi;
	cin >> girdi;
	
	vector <char> letter;
	map <char,int> order;
	order.insert ( pair<char,int>(girdi[0],1) );
	count1++;
	map<char,int>::iterator it;
	vector <int> area;
	int len=girdi.size()-1;
	for(int i=len;i>=0;i--)
	{
		it=order.find(girdi[i]);
		if(it!=order.end())
		{
					order.insert ( pair<char,int>(girdi[i],it->second) );
					if(it->second==1)
							count1++;
					else
						count2++;
		}
		else
		{
			if(i==len)
			{
				order.insert ( pair<char,int>(girdi[i],2) );
				count2++;
			}
			else
			{
				if(count2>=count1)
				{
					order.insert ( pair<char,int>(girdi[i],1) );
					count1++;
				}
				else
				{
					order.insert ( pair<char,int>(girdi[i],2) );
					count2++;
				}
			}
		}
		
	}
	long long int area_sum=1;
	for(map<char,int>::iterator it2 = order.end();it2!=order.begin();it2--)
	{	
		if(it2->second==1){
			h++;
			area_sum+=w;
		}else if(it->second==0)
		{
		}
			
		else
		{
			w++;
			area_sum+=h;
		}
		
	}
	cout << area_sum;
	return 0;
}
