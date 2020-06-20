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
void lietkensnt(int n)
{
    
    for (int i=2;n>0;i++)
    {
        if(isprime(i))
    	{
			cout<<i<<"\t";
            n--;
    	}
    
	}
	
}
int main()
{
    int n;
    cout<<"Nhap n= ";
	cin>>n;
    lietkensnt(n);
    return 0;
}
