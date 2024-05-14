// konstruktor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	int nim;
	string nama;
public:
	mahasiswa() {
		nim = 0;
		nama = "";
	}
	mahasiswa(int iNim)
	{
		nim = iNim;
	}
	mahasiswa(string iNama)
	{
		nama = iNama;
	}
	mahasiswa(int iNim, string iNama)
	{
		nim = iNim;
		nama = iNama;
	}
	void cetak() {
		cout << "Nim = " << nim << endl;
		cout << "Nama = " << nama << endl;
		cout << endl;
	};
};

