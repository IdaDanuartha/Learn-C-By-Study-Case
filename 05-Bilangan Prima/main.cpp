#include <iostream>
using namespace std;

int main()
{
    string option;
    do {
        int x, mod = 0;
        cout << "Masukkan angka\t: "; cin >> x;

        for (int i = x; i > 0; i--)
        {
            int result = x % i;
            if(result == 0)
            {
                mod++;
            }
        }

        if(mod == 2) {
            cout << x << " merupakan bilangan prima";
        } else {
            cout << x << " bukan bilangan prima";
        }

        cout << "\nLanjut (y/n)? "; cin >> option;
        system("cls");
    } while(option == "y");
    
}