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
public:
    void inputMk() {
        cout << "\n\nMasukkan code : ";
        cin >> code;
        cout << "Masukkan namaMk : ";
        cin >> namaMk;
        cout << "Masukkan sks : ";
        cin >> sks;
    }
    void tampil() {
        cout << "\nData Matakuliah ";
        cout << "\ncode Matakuliah : " << code;
        cout << "\nnamaMk Matakuliah : " << namaMk;
        cout << "\nsks Matakuliah : " << sks;
    }
};
int main() {
    Mahasiswa mhs;
    matakuliah mk;