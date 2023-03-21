#include <iostream>
using namespace std;

int main()
{
    int limit;
    cout << "Ukuran : "; cin >> limit;

    for(int i = 1; i <= limit; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "* ";
        }
        cout << "*" << endl;
    }
}