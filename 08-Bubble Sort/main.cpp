#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {5,2,8,13,34,10,7,-10,0,90};
    int length = sizeof(numbers)/sizeof(*numbers);
    int temp;

    cout << "Angka (sebelum diacak) : ";
    for (int i = 0; i < length; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl << endl;

    for(int j = 0; j < length; j++) {
        int acak = 0;
        for(int k = 0; k < length-1; k++) {
            if(numbers[k] > numbers[k+1]) {
                temp = numbers[k];
                numbers[k] = numbers[k+1];
                numbers[k+1] = temp;

                acak++;
            }
        }

        if(acak == 0) {
            break;
        }

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