//Tinh S=1^2+2^2+...+N^2
#include <iostream>
#include <math.h>
using namespace std;

main()
{
	int n;
	float s,i;
	s=0;
	cout<<"Nhap n : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		s+=pow(i,2);
	}
	cout<<"Ket qua : "<<s;
}
