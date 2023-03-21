#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {5,2,8,13,34,10,7};
    int length = sizeof(numbers)/sizeof(*numbers);
    int temp, pos;

    cout << "Angka (sebelum diacak) : ";
    for (int i = 0; i < length; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl << endl;

    // Proses urut data dengan selection sort
    for(int j = 0; j < length; j++) {
        temp = numbers[j];
        pos = j;
        for(int k = j; k < length; k++) {
            if(numbers[k] < temp) {
                temp = numbers[k];
                pos = k;
            }
        }

        numbers[pos] = numbers[j];
        numbers[j] = temp;

        cout << "Tahap ke-" << j+1 << " : ";
        for(int l = 0; l < length; l++) {
            cout << numbers[l] << " ";
        }
        cout << endl;
    }
    
    cout << "\nAngka (setelah diacak) : ";
    for (int m = 0; m < length; m++)
    {
        cout << numbers[m] << " ";
    }
}