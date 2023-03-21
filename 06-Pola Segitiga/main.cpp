#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Ukuran : "; cin >> size;

    // Pola Segitiga Siku-Siku
    
    // for(int i = 1; i <= size; i++)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         cout << "o ";
    //     }
    //     cout << "o" << endl;
    // }

    // Pola segitiga tengah bolong
    
    // for(int i = 1; i <= size; i++) {
    //     for (int j = 1; j < i; j++)
    //         if(j == 1 || i == size) {
    //             cout << "o ";
    //         } else {
    //             cout << "  ";
    //         }
    //     }
    //             cout << "o ";
    //     cout << "o" << endl;
    // }

    // Pola segitiga sama kaki
    
    // for(int i = 1; i <= size; i++)
    // {
    //     for (int j = size; j > i; j--)
    //     {
    //         cout << " ";
    //     }
    //     for(int k = 1; k <= (2*i-1); k++)
    //     {
    //         cout << "o";
    //     }
    //     cout << endl;
    // }

    // Pola segitiga sama kaki terbalik
    // for(int i = 1; i <= size; i++)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for(int k = size; k >= (2*i-size); k--)
    //     {
    //         cout << "o";
    //     }
    //     cout << endl;
    // }

    // Pola belah ketupat
    for(int i = 1; i <= size; i++)
    {
        for (int j = size; j > i; j--)
        {
            cout << " ";
        }
        for(int k = 1; k <= (2*i-1); k++)
        {
            cout << "o";
        }
        cout << endl;
    }
    for(int i = 1; i <= size; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for(int k = size; k >= (2*i-size); k--)
        {
            cout << "o";
        }
        cout << endl;
    }
}