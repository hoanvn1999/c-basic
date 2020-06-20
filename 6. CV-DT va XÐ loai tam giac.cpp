//Pham Le Hoan. K23CMUTMT
#include<iostream>
#include<math.h>
using namespace std;

void tamgiac(float a, float b, float c)
{
	if (a+b>c&&a+c>b&&b+c>a)
	{
		float p2 = (a+b+c)/2;
		float p = a+b+c;
		float s=sqrt(p2*(p2-a)*(p2-b)*(p2-c));
		cout<<"P= "<<p<<"\nS= "<<s<<endl;
		if (a==b&&a==c&&b==c)
			cout<<"Tam giac deu";
		else
			if(a==b||a==c||b==c)
			{	
				if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
					cout<<"Tam giac vuong can";
				else
					cout<<"Tam giac can";
			}
			else
			{
				if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
					cout<<"Tam giac vuong";
				else
					cout<<"Tam giac thuong";
			}
	}
	else
		cout<<"Khong tao thanh tam giac";
}
int main()
{
	float c1,c2,c3;
	cout<<"Nhap ba canh tam giac:\n";
	cout<<"Nhap canh 1: ";
	cin>>c1;
	cout<<"Nhap canh 2: ";
	cin>>c2;
	cout<<"Nhap canh 3: ";
	cin>>c3;
	tamgiac(c1,c2,c3);
	return 0;
}
