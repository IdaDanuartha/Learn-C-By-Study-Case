#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Ukuran : "; cin >> size;

    // Pola persegi
    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j <= size; j++) {
            // Pola persegi tengah bolong
            if(i == 1 || j == 1 || i == size) {
                cout << "o ";
            } else {
                cout << "  ";
            }
        }
        cout << "o" << endl;
    }
}