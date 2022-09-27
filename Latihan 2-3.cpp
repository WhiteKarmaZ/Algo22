#include <iostream>
using namespace std;

#define garis "-------------"

int main()
{
	double tb,bb;
	
	cout<<"Program menghitung berat badan ideal"<<endl;
	cout<<garis<<endl;
	
	cout<<"Masukkan tinggi badan anda = "; cin>>tb;
	cout<<garis<<endl;
	
	bb = (tb-100)-(tb-100) * 10/100;
	
	cout<<"Maka berat badan ideal anda adalah = "<<bb<<endl;
	cout<<garis<<endl;
	
	return 0;
}
