//Pham Le Hoan. K23CMUTMT
#include<iostream>
using namespace std;
int isprime(int x)
{
    if(x<=1)
        return 0;
    for(int i=2;i<x;i++)
           if(x%i==0)
                return 0;
    return 1;
}

int main()
{
	int n,i=1;
	cout<<"Nhap n: ";
	cin>>n;
	int s=0;
	int dem=0;
	while(i<=n)
	{
		int x;
		cout<<"Nhap x: ";
		cin>>x;
		if(isprime(x))
		{
			s=s+x;
			dem++;
		}
		i++;
	}
	float TBC=s/dem;
	cout<<"TBC cac SNT: "<<TBC;
	return 0;
}
