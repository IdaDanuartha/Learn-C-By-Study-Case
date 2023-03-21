#include <iostream>
using namespace std;

int main()
{
    int awal, akhir;

    cout << "Awal : "; cin >> awal;
    cout << "Akhir : "; cin >> akhir;

    for(int i = awal; i <= akhir; i++) {
        int mod = 0;
        for(int j = i; j > 0; j--) {
            int result = i % j;
            if(result == 0) {
                mod++;
            }
        }

        if(mod == 2) {
            cout << i << " ";
        }
    }
}