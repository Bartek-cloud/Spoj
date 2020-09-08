#include <iostream>
#include <math.h>
using namespace std;
 
int NWW(int a,int b)
{
	int c;
	if(a==b)return a;
	if(a>b)c=a;
	else c=b;
	while(!(c%a == 0 && c%b == 0))c++;
	return c;
}
 
 
int main()
{
	int ile,a,b;
 
	cin >> ile;
	for (int i=1; i<=ile; i++)
	{
		cin >> a>>b;
		cout<<NWW(a,b)<<endl;
 
	}
 
	return 0;
}
 