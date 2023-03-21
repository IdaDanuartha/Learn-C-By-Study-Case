#include<iostream>
using namespace std;

int main()
{
    string gender;
    float tb, bb, bb_ideal;    

    cout << "Gender(L/P)\t: "; cin >> gender;
    cout << "Berat badan (kg)\t: "; cin >> bb;
    cout << "Tinggi badan (cm)\t: "; cin >> tb;

    cout << "---------------------------------" << endl;

    if(gender == "L") {
        bb_ideal = (tb-100) - ((tb-100) * 0.1);
    } else if (gender == "P") {
        bb_ideal = (tb-100) - ((tb-100) * 0.15);
    } else {
        cout << "Gender tidak diketahui";
        bb_ideal = 0;
    }

    if(bb_ideal != 0) {
        if(bb == bb_ideal) {
            cout << "Berat badan ideal = " << bb_ideal << endl;
            cout << "Berat badan kamu = " << bb << endl;
            cout << "Maka berat badan anda ideal" << endl;
        } else if(bb > bb_ideal) {
            cout << "Berat badan ideal = " << bb_ideal << endl;
            cout << "Berat badan kamu = " << bb << endl;
            cout << "Maka berat badan anda gemuk" << endl;
        } else {
            cout << "Berat badan ideal = " << bb_ideal << endl;
            cout << "Berat badan kamu = " << bb << endl;
            cout << "Maka berat badan anda kurus" << endl;
        }
    }
}