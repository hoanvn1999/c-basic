//Pham Le Hoan. K23CMUTMT
#include<iostream>
using namespace std;

int Shcn(float a, float b)
{
	int s=a*b;
	return s;
}
int Phcn(float a, float b)
{
	int p=(a+b)*2;
	return p;
}
int main()
{
	int d,r;
	cout<<"Nhap chieu dai: ";
	cin>>d;
	cout<<"Nhap chieu rong: ";
	cin>>r;
	cout<<"Dien tich HCN: "<<Shcn(d,r);
	cout<<"\nChu vi HCN: "<<Phcn(d,r);
	return 0;
}
