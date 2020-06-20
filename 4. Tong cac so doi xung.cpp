//Pham Le Hoan. K23CMUTMT
#include<iostream>
using namespace std;
int dao(int n)
{
	int m=0,s=n;
	while(n!=0)
	{
		int sd=n%10;
		m=m*10+sd;
		n=n/10;
	}
	if(s==m)
		return 1;
	return 0;
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int s=0;
	for(int i=1;i<=n;i++)
	{
		int x;
		cout<<"Nhap x: ";
		cin>>x;	
		if(dao(x)==1)
		s=s+x;
	}
	cout<<"Tong cac so doi xung: "<<s;
	return 0;
}
