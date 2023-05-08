#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim();			// Deklarasi method
};


void mahasiswa::showNim() {
	cout << "No induk = " << nim << endl;		//implementasi method diluar class 
}

int main()
{
	mahasiswa mhs{ 1 };					// object mhs
	mhs.showNim();						// Member Access Operator

	mahasiswa& ref = mhs;				// Pointer Reference reMhs
	ref.nim = 2;						//  Member Access Operator
	mhs.showNim();



}