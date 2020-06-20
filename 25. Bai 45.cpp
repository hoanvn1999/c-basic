//Pham Le Hoan. K23CMUTMT
#include<iostream>
using namespace std;

int Tongcs(int & n)
{
	int s=0;
	while(n!=0)
	{
		s=s+n%10;
		n=n/10;
	}
	return s;
}

int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<Tongcs(n);
	return 0;
}
