//Pham Le Hoan. K23CMUTMT
#include<iostream>
using namespace std;

int GiaiThua(int n)
{
	int s=0;
	for(int i=1; i<=n; i++)
		s=s*i;
	return s;
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Tong la: "<<GiaiThua(n);
	return 0;
}
