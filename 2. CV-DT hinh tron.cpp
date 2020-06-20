//Pham Le Hoan. K23CMUTMT
#include<iostream>
using namespace std;

int Stron(float r)
{
	float s=r*r*3.14159265358979;
	return s;
}
int Ptron(float r)
{
	float p=3.14159265358979*r*2;
	return p;
}
int main()
{
	int r;
	cout<<"Nhap ban kinh hinh tron: ";
	cin>>r;
	cout<<"Dien tich hinh tron: "<<Stron(r);
	cout<<"\nChu vi hinh tron: "<<Ptron(r);
	return 0;
}
