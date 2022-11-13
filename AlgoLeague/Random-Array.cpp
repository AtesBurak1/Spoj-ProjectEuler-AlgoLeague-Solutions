#include <bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int size)
{
	int i,j;
	int minIndex;
	for(i=1;i<size;i++)
	{
		int k=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>k)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]= k;
	}
}
int main() {
   	int n,num,num2,sum=0,flag;
    cin >> n;
    int a[3000];
    int k=0;
    while(k<n)
    {
    	cin >> num;
    	a[k]=num;
    	k++;
	}
	insertionsort(a,n);
    for(int i = 0; i < n-1; i++) 
    {	
    	if(a[i]==a[i+1])
    	{
    		sum++;
    		a[i+1]==a[i+1]+1;
		}
    	
	}
	cout << sum;
    return 0;
}
