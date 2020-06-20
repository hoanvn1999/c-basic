//Pham Le Hoan. K23CMUTMT
#include<iostream>
#include<math.h>
using namespace std;

int BonMuk(int n)
{
	int k;
	for (int i=0;pow(4,i)<=n;i++)
		k=i;
	return k;
}
int main()
{
	int n,kq;
	cout<<"Nhap n:"; cin>>n;
	cout<<"k="<<BonMuk(n);
}
