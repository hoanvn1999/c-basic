//Pham Le Hoan. K23CMUTMT
#include<iostream>
#include<math.h>
using namespace std;

int TongGT(int x, int n)
{
	float s=1; long mau=1;
	for (int i=2;i<=n;i=i+2)
	{
		mau=mau*i;
		s=s+pow(x,i)/mau;
	}
}

int main()
{
	int n,x; float kq;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Nhap x: "; cin>>x;
	kq=TongGT(x,n);
	cout<<kq;
}
