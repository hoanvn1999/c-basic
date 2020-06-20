//Pham Le Hoan. K23CMUTMT
#include<iostream>
using namespace std;

int GT(int n)
{
	int s=1;
	for(int i=1;i<=n;i++)
		s=s*i;
	return s;
}
int main()
{
	int C,n,k;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Nhap k: "; cin>>k;
	C=GT(n)/(GT(k)*GT(n-k));
	cout<<C;
	return 0;
}
