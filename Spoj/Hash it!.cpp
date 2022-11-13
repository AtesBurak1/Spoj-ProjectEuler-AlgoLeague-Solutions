#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,len;
	vector <string> str;
	char *ptr,strk[16];
	cin >> n;
	while(n--)
	{
		cin>> len;
		 while(len--)
		 {
		 	cin.getline(strk,16);
		 	ptr=strtok(strk,":");
		 	if(ptr[0]=="ADD")
		 	{
		 		vector <string>::iterator it;
		 		it=find(str.begin(),str.end(),ptr[1]);
		 		if(it==str.end())
		 			str.push_back(ptr[1]);
			 }
			 else
			 {
			 	vector <string>::iterator it;
		 		it=find(str.begin(),str.end(),ptr[1]);
		 		if(it!=str.end())
		 			str=remove(str.begin(),str.end(),ptr[1]);
			 }
		 }
		
	}
	
	return 0;
}
