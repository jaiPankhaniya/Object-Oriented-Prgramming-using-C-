// program to print the values as per the given equation......

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float r=0.10;
	int p=1000,n=1;
	float V;
	cout<<"P\t"<<"r\t"<<"n\t"<<"V\t";
	for(n=1;p<=10000 && n<=10 && r<=0.20;n++)
	{
		V=p*(1+r);
		V=pow(V,n);
		cout<<"\n"<<p<<"\t"<<r<<"\t"<<n<<"\t"<<V;
		r=r+0.01;
		p=p+1000;
	}
	return 0;
}
