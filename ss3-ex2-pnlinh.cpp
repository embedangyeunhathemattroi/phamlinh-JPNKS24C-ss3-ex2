#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

int luachon;
float nhietdoc,nhietdof;
cout << "1. Chuyen doi tu do C sang do F" << endl;
cout << "2. Chuyen doi tu do F sang do C" << endl;
cout << "Ban chon giua 1 va 2 : " << endl;
cin>>luachon;
if (luachon==1)
{
cout << "Nhap do C : " << endl;
cin>>nhietdoc;
nhietdof=(1.8*nhietdoc)+32;
cout << "Do F tuong ung = " << nhietdof << endl;
}
else
{
cout << "Nhap do F : " << endl;
cin>>nhietdof;
nhietdoc=(nhietdof-32)/1.8;
cout << "Do C tuong ung = " << nhietdoc << endl;
}
return 0;
}

