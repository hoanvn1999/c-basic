//Pham Le Hoan. K23CMUTMT
#include<iostream>
using namespace std;
void Findbitbyte(int bit)
{
	int byte,b1,b2,t1,t2;
	for (bit=125;bit<=999;bit++)
	{
		byte=bit*8;
		b1=bit/100;
		b2=byte/1000;
		t1=bit%10;
		t2=(byte%100)/10;
		if (b1==b2 && t1==t2)
			cout<<bit<<"*8="<<byte<<endl;
	}
}
int main()
{
	int bit;
	Findbitbyte(bit);
	return 0;
}

