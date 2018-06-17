#include <iostream>
//Tinh S = 1 + 2 + 3+...+n
using namespace std;

main()
{
	int i,n,s;
	s=0;
	cout<<"Nhap n : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		s+=i;
	}
	cout<<"Ket qua : "<<s;
}
