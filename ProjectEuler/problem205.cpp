#include <iostream>
#include <cmath>

int main()
{
	//number of ways of rolling a total of n using 9 four-sided dice (pyramidal)
	int win[] = {0, 0,  0,  1,   9,  45, 165, 486, 1206, 2598, 4950, 8451, 13051, 18351, 23607, 27876, 30276, 30276, 27876, 23607, 18351, 13051, 8451, 4950, 2598, 1206, 486, 165, 45, 9, 1};
	
	//number of ways of rolling a total of n using 6 six-sided dice (cubic)
	int win2[] = {1, 6, 21, 56, 126, 252, 456, 756, 1161, 1666, 2247, 2856, 3431, 3906, 4221, 4332, 4221, 3906, 3431, 2856, 2247, 1666, 1161, 756, 456, 252, 126, 56, 21, 6, 1};
	 
	double w = 0;
	int i,j;
	double t = pow(4,9) * pow(6,6);
	for(i=0;i<31;i++)
	{
	    for (j=i+1;j<31;j++)
	        w += win2[i]*win[j];
	}
	printf("%.7lf",w/t);
	return 0;
}
