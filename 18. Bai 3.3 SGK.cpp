//Pham Le Hoan. K23CMUTMT
#include<iostream>
using namespace std;

int GT(int n)
{
	int s=1;
	for(int i=n; i>0; i=i-2)
		s=s*i;
	return s;
}

int main()
{
	int n,s;
	cout<<"Nhap n: ";
	cin>>n;
	s=GT(n);
	cout<<"n!!= "<<s;
	return 0;
}
