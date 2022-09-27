#include <iostream>
using namespace std;

#define garis "-------------"

int main()
{
	double bb,tb,usia,kal;
	char jk;
	
	cout<<"Program menghitung kalori yang dibutuhkan"<<endl;
	cout<<garis<<endl;
	
	cout<<"Jenis kelamin anda (P/W) = "; cin>>jk;
	cout<<garis<<endl;
	
	cout<<"Masukkan berat badan anda = "; cin>>bb;
	cout<<garis<<endl;
	
	cout<<"Masukkan tinggi badan anda = "; cin>>tb;
	cout<<garis<<endl;
	
	cout<<"Masukkan usia anda = "; cin>>usia;
	cout<<garis<<endl;
	{
	
	if ( jk=='p'||jk=='P'){
	kal = (88.4 + (13.4 * bb)) + (4.8 * tb) - (5.68 * usia);
}
	else if(jk=='w'||jk=='W'){
		kal = (447.6 + (9.25 * bb)) + (3.10 * tb) - (4.33 * usia);
	}
	
}

	
	cout<<"Maka kalori yang anda butuhkan adalah "<<kal<<endl;
	cout<<garis<<endl;
	
	return 0;
	
}
