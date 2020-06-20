//Pham Le Hoan. K23CMUTMT
#include<iostream>
using namespace std;

void nextday(int a, int b, int c)
{
	int D;
	if (b<0||b>12)
		cout<<"Khong co ngay do";
	else
	{
		if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
			D=31;
		else
		{
			if(b==4||b==6||b==9||b==11)
				D=30;
			else
			{
				if(b=2)
				{
					if(c%4==0&&c%100!=0||c%400==0)
						D=29;
					else
						D=28;
				}
			}
		}
	}
	if(a<D)
		cout<<"Ngay tiep theo: "<<a + 1<<" - "<<b<<" - "<<c;
	if(a>D)
		cout<<"Khong co ngay do";
	if(a==D)
	{
		if(b==12)
			cout<<"Ngay tiep theo: 1 - 1 "<<c+1;
		else
			cout<<"Ngay tiep theo: "<<1<<" - "<<b+1<<" - "<<c;
	}
}

int main()
{
	int n,t,na;
	cout<<"Nhap ngay: ";
	cin>>n;
	cout<<"Nhap thang: ";
	cin>>t;
	cout<<"Nhap nam: "; 
	cin>>na;
	nextday(n,t,na);
	return 0;
}
