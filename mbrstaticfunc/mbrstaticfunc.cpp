// mbrstaticfunc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    static int nim;

public:
    int id;
    string nama;

    void setId();
    void printAll();

    static void setNim(int pnim) { nim = pnim; }
    static int getNim() { return nim; }

    mahasiswa(string pnama)
    {
        nama = pnama;
        setId();
    }
};
