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
void lietkesnt(int n)
{
     for (int i=2;i<=n;i++)
     {
         int kq =isprime(i);
         if(kq==1)
                  cout<<i<<"\t";
     }  
}
int main()
{
    int n;
    cout<<"\nNhap n= ";cin>>n;
    lietkesnt(n);
    return 0;
}
                           

