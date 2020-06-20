//Pham Le Hoan. K23CMUTMT
#include<iostream>
#include<math.h>
using namespace std;
float Tong(int n)
{
	float s=0;                    
	for (int i=1;i<=n;i++)
	{
		s=s+pow(-1,i+1)/i;
	}
	return s;
}

int main()
{
	int n;
	float kq;
	cout<<"Nhap n:"; cin>>n;
	kq=Tong(n);
	cout<<kq;
	return 0;
}
