#include<iostream>  
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
	float nilai;
public:
    void input() {
        cout << "Masukkan Nim : ";
        cin >> nim;
        cout << "Masukkan nama : ";
        cin >> nama;
        cout << "Masukkan nilai : ";
        cin >> nilai;
    }
    void printData();
};
void Mahasiswa::printData() {
    cout << "\nData Mahasiswa";
    cout << "\nNim : " << nim;
    cout << "\nnama : " << nama;
    cout << "\nnilai : " << nilai;
}
class matakuliah {
private:
    string code;
    string namaMk;
    int sks;
