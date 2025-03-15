/*
Bài tập 1: Cơ bản về Pointer
Viết chương trình khai báo một biến kiểu int, sau đó dùng pointer để in giá trị và địa chỉ của biến đó.

Bài tập 2: Thay đổi giá trị qua Pointer
Viết hàm nhận một pointer kiểu int làm tham số, tăng giá trị của biến mà pointer trỏ tới lên 5 đơn vị, sau đó in giá trị mới trong main.

Bài tập 3: Hoán đổi hai số dùng Pointer
Viết hàm hoán đổi giá trị của hai biến kiểu int bằng cách dùng pointer. Sau đó kiểm tra trong main.

Bài tập 4: Pointer và Mảng
Viết chương trình dùng pointer để tính tổng các phần tử trong một mảng kiểu int.
*/
#include<iostream>

using namespace std;
// Bài tập 2:
void increaseValue(int* number){
    *number += 5 ;
}
// Bài tập 3:
void swapValue(int* number,int* otherNumber){
    int temp;
    temp = *number;
    *number = *otherNumber;
    *otherNumber = temp;

}
//Bài tập 4:
int sumArray(int myArray[], int arraySize){
    int* ptr = myArray;
    int sum = 0;
    for (int i = 0; i < arraySize; i++)
    {
        sum += *(ptr + i);
    }
    return sum;
}

int main(){
    // Bài tập 1:
    int num = 1000;
    int* ptr = &num;
    cout << "Memory address of num: " << ptr << endl;
    cout << "Pointer's value: " << *ptr << endl;

    // Bài tập 2:
    increaseValue(ptr);
    cout << "Num's value after increase 5: " << num << endl;

    // Bài tập 3:
    int  num1 = 2000;
    int* ptrNum1 = &num1;
    swapValue(ptr,ptrNum1);
    cout << "Num's value after swap: " << num << endl;
    cout << "Num1's value after swap: " << num1 << endl;
    
    // Bài tập 4:
    int arraySize;
    cout <<"Enter array's size: ";
    cin >> arraySize;
    int* arr = new int[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Enter arr[" << i << "] : ";
        cin >> arr[i];
    }
    int sum = sumArray(arr,arraySize);
    cout << "Sum of your array: " << sum;

    return 0;
}