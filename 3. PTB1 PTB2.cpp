//Pham Le Hoan. K23CMUTMT
#include<iostream>
#include<math.h>
using namespace std;

void ptb1(float b, float c)
{
	if(b==0)
	{
		if(c==0)	
			cout<<"VSN";
		else	
			cout<<"VN";
	}
	else	
		cout<<"x= "<<-c/b;
}
void ptb2(float a, float b, float c)
{
	if(a==0)
		ptb1(b,c);
	else
	{
		float delta = b*b-4*a*c;
		if(delta<0)	
			cout<<"VN";
		else
		{
			if(delta==0)
				cout<<"x= "<<-b/2/a;
			else
				cout<<"x1= "<<(-b+sqrt(delta))/2/a<<"\n x2= "<<(-b+sqrt(delta))/2/a;
		}
	}
}
int main()
{
	float a,b,c;
	cout<<"Nhap a, b, c : ";
	cin>>a>>b>>c;
	if(a==0)
		ptb1(b,c);
	else
		ptb2(a,b,c);
	return 0;
}
