#include <iostream>

using namespace std;

main()
{
	int i,j,n;
	cout<<"Nhap vao chieu cao tam giac : ";
	cin>>n;
	for(i=n-1;i>=0;i--)
	{
		for(j=i;j>=0;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
