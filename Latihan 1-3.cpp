#include <iostream>
using namespace std;

#define garis "-------------"
int main()
{
	const double pi = 22/7;
	
	double vol,tinggi,r;
	
	cout<<"Program untuk menghitung volume kerucut"<<endl;
	cout<<garis<<endl;
	
	cout<<"Masukkan tinggi kerucut = "; cin>>tinggi;
	cout<<garis<<endl;
	
	cout<<"Masukkan jari-jari = "; cin>>r;
	cout<<garis<<endl;
	
	vol = (pi * r * r * tinggi) / 3;
	
	cout<<"Volume kerucut adalah = "<<vol<<endl;
	cout<<garis<<endl;
	
	return 0;
}
