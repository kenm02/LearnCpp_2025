#include<iostream>

using namespace std;

int main(){
    int number = 10;
    int* ptr = &number ;
    cout << "Dia chi cua con tro: " << &ptr << endl;
    cout << "Gia tri cua con tro: " << *ptr << endl;
    cout << "Thay doi con tro sang doi tuong khac!" << endl;
    int otherNumber = 100;
    ptr = &otherNumber;
    cout << "Dia chi cua con tro: " << &ptr << endl;
    cout << "Gia tri cua con tro: " << *ptr << endl;
    delete ptr;
    if(ptr != nullptr){
        cout << "Con tro van ton tai tai vi tri: " << &ptr;
    }
    else
    {
        cout << "Con tro khong con ton tai! ";
    }
}