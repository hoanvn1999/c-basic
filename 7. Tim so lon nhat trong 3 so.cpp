//Pham Le Hoan. K23CMUTMT
#include<iostream>
using namespace std;

int Max(int a,int b,int c)
{
	int max=a;
	if (b>max)
		max=b;
	if (c>max)
		max=c;
	return max;
}
int main()
{
	int a,b,c;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Nhap c: ";
	cin>>c;
	cout<<"So lon nhat trong ba so la: "<<Max(a,b,c);
}

