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