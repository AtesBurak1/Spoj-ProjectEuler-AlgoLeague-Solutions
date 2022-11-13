
#include <iostream>
#include <vector>
#include <string>


using namespace std;
string callme(void)
{
    int flag,flag2,c=0,count2=0;
	string s,key,keyShort;
    cin >> s;
    cin >> key;
	vector <char> wovel;
	wovel.push_back('a');
	wovel.push_back('i');
	wovel.push_back('e');
	wovel.push_back('u');
	wovel.push_back('o');
	keyShort+=key[0];
	for(int k=0;k<key.length();k++)
	{   flag=0;
	    for(int h=0;h<5;h++)
	    {
	        if(key[k]==wovel[h])
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag)
	    {
	        if(key[k]==keyShort[c])
	        {
	            continue;
	        }
	        else
	        {
	            keyShort+=key[k];
	            c++;
	        }
	    }
	    else
	    {
	       keyShort+=key[k];
	            c++; 
	    }
	    
	}
	for(int i=0;i<s.length()-keyShort.length()+1;i++)
	{	int lem=0;
	    count2=0;
		if(keyShort[lem]==s[i])
		{   lem++;
		    for(;lem<keyShort.length();lem++)
		    { 
		        for(int h=0;h<5;h++)
        	    {
        	        if(s[i+lem]==wovel[h] && keyShort[lem]!=s[i+lem])
        	        {
        	           
        	            if(i<s.length()-1)
        	            {
        	                i++;
        	            count2++;
        	            h--;
        	            }
        	            else
        	                return "no";
        	        }
        	    }
		        
		        if(keyShort[lem]==s[i+lem])
		        {
		            flag=1;
		        }
		        else
		        {
		            flag=0;
		            break;
		        }
		    }
		}
		if(flag)
		    return "yes";
		i=i-count2;
	}
	return "no";
}
int main() {
	cout <<callme();
    return 0;
}
