#include<iostream>
using namespace std;

int main()
{    
    int nilai = 78;
    int kkm = 75;

    cout << "Masukkan nilai (0-100)\t: "; cin >> nilai;

    if(nilai >= kkm) {
        cout << "kkm adalah " << kkm << " dan nilaimu adalah " << nilai << 
        " jadi kamu dinyatakan lulus";
    } else {
        cout << "kkm adalah " << kkm << " dan nilaimu adalah " << nilai << 
        " jadi kamu dinyatakan tidak lulus";
    }
}