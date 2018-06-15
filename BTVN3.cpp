#include <iostream>
//Viet chuong trinh nhap vao 3 so a,b,c
//Tim so lon nhat.
using namespace std;

main()
{
				float a,b,c;
				float max;
	label1 :	cout<<"Moi nhap vao 3 so a, b, c: "<<endl;
				cout<<"a : ";
				cin>>a;
				cout<<"b : ";
				cin>>b;
				cout<<"c : ";
				cin>>c;
				if (a==b||b==c||a==c)
				{
					cout<<"Ban da nhap cac so bang nhau "<<endl;
					cout<<"Yeu cau nhap lai ";
					goto label1;
				}
				else
				{
					max=a;
					if (max<b)
					{
						max=b;
						if(max<c)
						{
							max=c;
						}
					}
					else if (max<c)
					{
						max=c;
					}
				}
				cout <<"So lon nhat la : "<<max ;
}
