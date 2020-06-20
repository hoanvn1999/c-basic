//Pham Le Hoan. K23CMUTMT
#include<iostream>
#include<math.h>
using namespace std;

int SCP(int n)
{
	int check=0;
	for(int i=1;i<=(n/2);i++)
	{
		int s1=(int) sqrt(n-i*i);
		if(s1==sqrt(n-i*i))
			check=1;
	}
	return check;
}

int main()
{
	int n, check;
	cout<<"Nhap n: ";
	cin>>n;
	check=SCP(n);
	if(check==0)
		cout<<"No";
	else
		cout<<"Yes";
	return 0;
}
