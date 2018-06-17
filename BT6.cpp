//Ve tam giac so
//1
//12
//123
//1234

#include <iostream>

using namespace std;

main()
{
	int i,j,n;
	cout<<"Nhap chieu cao tam giac : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
}
