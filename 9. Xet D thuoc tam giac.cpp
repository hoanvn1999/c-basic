//Pham Le Hoan. K23CMUTMT
#include<iostream>
#include<math.h>
using namespace std;

int Stg(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float p,s;
	float a = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	float b = sqrt(pow((x3-x2),2)+pow((y3-y2),2));
	float c = sqrt(pow((x3-x1),2)+pow((y3-y1),2));
	if(a>0&&b>0&&c>0&&(a<b+c||b<a+c||c<a+b))
	{
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
	}
	return s;
}
int main()
{
	float xA,xB,xC,xD,yA,yB,yC,yD;
	cout<<"Nhap toa do diem A :";
	cin>>xA>>yA;
	cout<<"Nhap toa do diem B :";
	cin>>xB>>yB;
	cout<<"Nhap toa do diem C :";
	cin>>xC>>yC;
	cout<<"Nhap toa do diem D :";
	cin>>xD>>yD;
	if(Stg(xA,yA,xB,yB,xC,yC)==(Stg(xA,yA,xC,yC,xD,yD)+Stg(xB,yB,xC,yC,xD,yD)+Stg(xA,yA,xB,yB,xD,yD)))
		cout<<"D thuoc tam giac ABC";
	else
		cout<<"D khong thuoc tam giac ABC";
}
