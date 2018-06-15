#include <iostream>
//Viet chuong trinh nhap vao thang in ra so ngay cua thang do
using namespace std;

main()
{
	int year,month;
	int days;
label : cout <<"Moi nhap vao nam ,thang : "<<endl;
		cout <<"Nam : ";
		cin >>year;
		cout<<"Thang : ";
		cin>>month;
		if (year<0||month<0||month>12)
		{
			cout<<"Ban da nhap sai"<<endl;
			cout<<"Yeu cau nhap lai"<<endl;
			goto label;
		}	
		else
		{
			if(month>=1&&month<7&&month!=2)
			{
				if(month%2==1)
				{
					days = 31;
					cout<<"thang "<<month<< " nam "<<year<<" co "<<days<<" ngay";
				} 
				else
				{
					days = 30;
					cout<<"thang "<<month<< " nam "<<year<<" co "<<days<<" ngay";
				}
			}
			if(month==2)
			{
				if(year%4==0)
				{
					days = 29;
					cout<<"thang "<<month<< " nam "<<year<<" co "<<days<<" ngay";
				}
				else
				{
					days = 28;
					cout<<"thang "<<month<< " nam "<<year<<" co "<<days<<" ngay";
				}
			}
			if(month>7&&month<=12)
			{
				if(month%2==0)
				{
					days = 31;
					cout<<"thang "<<month<< " nam "<<year<<" co "<<days<<" ngay";
				}
				else
				{
					days = 30;
					cout<<"thang "<<month<< " nam "<<year<<" co "<<days<<" ngay";
				}
			}
		}
}
