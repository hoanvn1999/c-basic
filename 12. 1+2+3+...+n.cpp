//Pham Le Hoan. K23CMUTMT
#include<iostream>
using namespace std;

int Tong(int n)
{
	int s=0;
	for(int i=1; i<=n; i++)
		s=s+i;
	return s;
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Tong la: "<<Tong(n);
	return 0;
}
