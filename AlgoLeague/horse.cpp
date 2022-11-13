#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	string s;
	vector <char> a;
	int k=0;
	cin >> s;
	for(int i=0;i<s.size();i++)
	{
		a.push_back(s[i]);
	}
	vector <char>::iterator n;
	vector <char>::iterator e;
	vector <char>::iterator i;
	vector <char>::iterator g;
	vector <char>::iterator h;
	n=find(a.begin(),a.end(),'n');
	e=find(a.begin(),a.end(),'e');
	i=find(a.begin(),a.end(),'i');
	g=find(a.begin(),a.end(),'g');
	h=find(a.begin(),a.end(),'h');
	while(n!=a.end() && e!=a.end() && i!=a.end() && g!=a.end() && h != a.end())
	{
		k++;
		a.erase(n);
		e=find(a.begin(),a.end(),'e');
		a.erase(e);
		i=find(a.begin(),a.end(),'i');
		a.erase(i);
		g=find(a.begin(),a.end(),'g');
		a.erase(g);
		h=find(a.begin(),a.end(),'h');
		a.erase(h);
		n=find(a.begin(),a.end(),'n');
		e=find(a.begin(),a.end(),'e');
		i=find(a.begin(),a.end(),'i');
		g=find(a.begin(),a.end(),'g');
		h=find(a.begin(),a.end(),'h');
	}
	if(k==0)
		cout << "Invalid" ;
	else
		cout << k;
	
	
	
	return 0;
}
