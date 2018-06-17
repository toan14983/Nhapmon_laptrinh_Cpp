//Tinh P= 1*2*3*...*n
#include <iostream>

using namespace std;

main()
{
	int i,n,p;
	p=1;
	cout<<"Nhap n : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		p*=i;
	}
	cout<<"Ket qua : "<<p;
}
