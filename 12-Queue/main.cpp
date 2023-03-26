#include <iostream>
using namespace std;

#define max 5
string data[max];
int top = 0;

int main()
{
    int pil;
    string isi;

    cout << "Menu Utama\n1. Enqueue\n2. Dequeue\nPilihan : ";
    cin >> pil;

    switch(pil) {
        case 1:
            cout << "Enqueue";
            break;
        case 2:
            cout << "Dequeue";
            break;
    }
}