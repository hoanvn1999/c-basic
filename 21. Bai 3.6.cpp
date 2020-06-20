//Pham Le Hoan. K23CMUTMT
#include<iostream>
#include<math.h>
using namespace std;

int HM(int n)
{
	int k;
	for(int i=0;pow(2,i)<n;i++)
		k=i+1;
	return k;
}
int main()
{
	cout<<"Nhap n: ";
	int n,k;
	cin>>n;
	k=HM(n);
	cout<<k;
	return 0;
}
