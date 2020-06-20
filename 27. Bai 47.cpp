//Pham Le Hoan. K23CMUTMT
#include<iostream>
using namespace std;

int dao(int&n)
{
	int m=0;
	while(n!=0)
	{
		int sd=n%10;
		if(sd!=0&&sd!=5)
			m=m*10+sd;
		n=n/10;
	}
	n=m; m=0;
	while(n!=0)
	{
		int sd=n%10;
		m=m*10+sd;
		n=n/10;
	}
	return m;
}

int main()
{
	int n,kq;
	cout<<"Nhap n: ";
	cin>>n;
	kq=dao(n);
	cout<<"Dao: "<<kq;
	return 0;
}
