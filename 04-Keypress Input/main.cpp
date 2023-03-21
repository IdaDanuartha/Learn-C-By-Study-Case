#include <iostream>
#include <conio.h>
using namespace std;

int main() {
//	char x = getch();
	int x, index = 0;
	string buah[] = {"Mangga", "Apel", "Jeruk", "Nanas"};
	// atas = 70, bawah = 80, kanan = 77, kiri = 75, esc = 27
	
	do {
		x = getch();
		system("cls");
		
		if(x == 224) {
			x = getch();
			switch(x) {				
				case 75:
					if(index > 0) {
						index--;
					} else {
						index = index;
					}
					cout << buah[index] << endl;
					break;
				case 77:
					if(index < 3) {
						index++;
					} else {
						index = index;
					}
					cout << buah[index] << endl;
					break;
			}
		} else {
			cout << (char) x << endl;
		}
	} while(x != 27);
//	cout << "Karakter : " << (char)x << endl;
//	cout << "ASCII : " << x << endl;
//	
//	x = getch();
//	cout << "ASCII fix : " << x;
}
