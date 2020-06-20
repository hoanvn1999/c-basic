//Pham Le Hoan. K23CMUTMT
#include<iostream>
#include<math.h>
using namespace std;

void TP(float a, float b, float c)
{
	float t,delta,t1,t2,x1,x2;
	if(a==0)
	{
        if(b==0)
        {      
            if(c==0)
                cout<<"Vo so nghiem";
            if(c!=0)
                cout<<"Vo nghiem";
        }
        else
    	{
        	t=(float) -c/b;
            if(t<0)
                cout<<"Phuong trinh vo nghiem";
            else
            {
                x1=sqrt(t);
           	    x2=-sqrt(t);
                cout<<"Nghiem la: "<<x1;
                cout<<"\nva\n"<<x2;
            }
        }
    }
    else
    {
        delta=b*b-4*a*c;
        if(delta<0)
            cout<<"Vo nghiem";
        else
        {
	        if(delta>0)
	        {
	            t1=(float)(-b + sqrt(delta))/(2*a);
	            t2=(float)(-b - sqrt(delta))/(2*a);
	            if(t1>=0)
	                t1=t;
	            if(t2>=0)
	                t2=t;
	            if(t<0)
	                cout<<"Phuong trinh vo nghiem";
	            if(t>=0)
	            {
	                x1=sqrt(t);
	                x2=-sqrt(t);
	                cout<<"Nghiem la: "<<x1;
	                cout<<"\nva\n"<<x2;
	            }
	        }
            else
            {
                t=-b/(2*a);
                if(t<0)
                    cout<<"Vo nghiem";
                else
                {
                    x1=sqrt(t);
                    x2=-sqrt(t);
                    cout<<"Nghiem la: "<<x1;
                    cout<<"\nva\n"<<x2;
                }
            }
        }
    }
}

int main()
{
	float a,b,c;
    cout<<"Nhap a: ";
    cin>>a;
    cout<<"Nhap b: ";
    cin>>b;
    cout<<"Nhap c: ";
    cin>>c;
    TP(a,b,c);
    return 0;
}
