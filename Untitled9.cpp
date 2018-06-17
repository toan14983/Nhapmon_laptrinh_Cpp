#include <iostream>
//Tinh S=1+1/2+1/3+...+1/n.
using namespace std;

main()
{
	int n;
	float s,i;
	cout<<"Nhap n : ";
	cin>>n;
	s=0;
	for(i=1;i<=n;i++)
	{
		s=s+(1/i);
	}
	cout<<"Ket qua : "<<s;
}
