#include <iostream>
//Viet chuong trinh nhap 2 so a va b
//So sanh
using namespace std;

main()
{
	float a,b;
label1 :	cout <<"Moi nhap 2 so a va b"<<endl;
			cout <<"a : ";
			cin >>a;
			cout<<"b : ";
			cin >>b;
			if (a==b)
			{
				cout<<"Ban da nhap 2 so giong nhau"<<endl;
				cout<<"Yeu cau nhap lai"<<endl;
				goto label1;
			}
			else
			{
				if (a>b)
				{
					cout<< a << " la so lon hon"<<endl;
				}
				else
				{
					cout<<b<<" la so lon hon";
				}
			}
}

