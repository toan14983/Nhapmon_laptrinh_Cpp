#include <iostream>
//Viet chuong trinh nhap vao thang in ra thang thuoc quy bao nhieu
using namespace std;

main()
{
		int month;
label : cout<<"Moi nhap vao thang : ";
		cin>>month;
		if(month<0||month>12)//kiem tra dieu kien nhap thang
		{
			cout<<"Ban da nhap sai"<<endl;
			cout<<"Yeu cau nhap lai"<<endl;
			goto label;
		}
		else 
		{
			if(month>=1&&month<=3)
			{
				cout<<"Thang "<<month<<" thuoc quy 1";
			}
			else if(month>=4&&month<=6)
			{
				cout<<"Thang "<<month<<" thuoc quy 2";
			}
			else if(month>=7&&month<=9)
			{
				cout<<"Thang "<<month<<" thuoc quy 3";
			}
			else
			{
				cout<<"Thang "<<month<<" thuoc quy 4";
			}
		}
}
