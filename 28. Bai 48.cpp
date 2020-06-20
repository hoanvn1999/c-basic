//Pham Le Hoan. K23CMUTMT
#include<iostream>
using namespace std;

int dao(int n)
{
	int m=0,s=n;
	while(n!=0)
	{
		int sd=n%10;
		m=m*10+sd;
		n=n/10;
	}
	if(s==m)
		return 1;
	return 0;
}

int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	if(dao(n))
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}
