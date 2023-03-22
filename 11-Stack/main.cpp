#include <iostream>
using namespace std;

#define max 5
string data[max];
int top = 0;

bool isEmpty()
{
    if(top == 0) {
        return true;
    } else {
        return false;
    }
}

bool isFull() 
{
    if(top >= max) {
        return true;
    } else {
        return false;
    }
}

void push()
{
    if(!isFull()) {
        cout << "Masukkan data : ";
        cin >> data[top];
        top++;
    }
}

void pop()
{
    if(!isEmpty()) {
        top--;
    }
}

void display()
{
    if(!isEmpty()) {
        cout << "Data tersimpan : " << endl;
        for (int i = 0; i < top; i++)
        {
            cout << i+1 << ". " << data[i] << endl;
        }
        
    } else {
        cout << "Data tidak tersedia!" << endl;
    }

    if(isFull()) {
        cout << "Stack penuh" << endl;
    }

    cout << endl;
}

int main()
{
    int pil;
    string isi;

    stack :
        system("cls");
        display();
        cout << "Menu Utama\n1. Push\n2. Pop\nPilih : ";
        cin >> pil;
    
    if(pil == 1) {
        system("cls");
        push();
        goto stack;
    } else if(pil == 2) {
        pop();
        goto stack;
    }
    system("cls");
    cout << "Program selesai";
}