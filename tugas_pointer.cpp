#include <iostream>
#include <conio.h>
using namespace std;

struct Digdata {
    string nama;
    long long npm;
    double nilai;
};

void fetchData(Digdata &mhsdata){
    cout << "Nama   : "; cin >> mhsdata.nama;
    cout << "NPM    : "; cin >> mhsdata.npm;
    cout << "Nilai  : "; cin >> mhsdata.nilai;
}

void printData(Digdata mhsdata[] ,int n){
    cout << "\n Data Mahasiswa" << endl;
    for (int i = 0; i < n; i++){
    cout << mhsdata[i].npm << " " << mhsdata[i].nama << " " << mhsdata[i].nilai<<endl;
    }
}

typedef Digdata *pointer;

void changeData(Digdata *Digdata, int n){

    pointer cv;
    long long npmin;
    long long npmbaru;
    string newname;
    double newnilai;

    cout << "Data Mahasiswa yang ingin diubah"<< endl;
    cout << "Masukkan NPM : ";cin >> npmin;
    cout << endl;
    cout << "Masukkan Data Mahasiswa yang baru"<<endl;
    cout << "Masukkan NPM : ";cin >> npmbaru;
    cout << "Masukkan Nama : ";cin >> newname;
    cout << "Masukkan Nilai : ";cin >> newnilai;

    for(int i = 0; i < n; i++){
        if (Digdata[i].npm!=npmin){
            continue;
        } else {
            Digdata[i].npm = npmbaru;
            Digdata[i].nama = newname;
            Digdata[i].nilai = newnilai;
        }
    }
   
}

main(){
    int n;
    Digdata data[n];
    cout << "Banyak data : "; cin >> n;
    for(int i = 0; i < n;i++){
        cout << "Data Mahasiswa Ke-"<<i+1<<"\n";
        fetchData(data[i]);
    }
    printData(data,n);
    changeData(data,n);
    printData(data,n);
    return 0;
}