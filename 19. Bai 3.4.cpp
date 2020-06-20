//Pham Le Hoan. K23CMUTMT
#include<iostream>
using namespace std;

int Sothuk(int k)
{
	int s1=1, s2=1, s3;
	for(int i=1;i<=k;i++)
	{		
		if(i==1||i==2)
			s3=s1;
		else
		{
			s3=s1+s2;
			s1=s2;
			s2=s3;
		}
	}
	return s3;
}
int main()
{
	int k;
	cout<<"Nhap k: ";
	cin>>k;
	cout<<Sothuk(k);
	return 0;
}
