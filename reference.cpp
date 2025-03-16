/*
Bài tập 1: Cơ bản về Tham chiếu
Đề bài: Khai báo một biến kiểu int và một tham chiếu đến biến đó. Thay đổi giá trị của biến thông qua tham chiếu và
in giá trị của cả biến gốc lẫn tham chiếu để kiểm tra.

Bài tập 2: Tham chiếu làm tham số hàm
Đề bài: Viết một hàm nhận tham chiếu đến một biến kiểu int làm tham số,
tăng giá trị của biến đó lên 10 đơn vị. Gọi hàm trong main và in giá trị trước/sau khi thay đổi.

Bài tập 3: Hoán đổi hai số dùng Tham chiếu
Đề bài: Viết một hàm nhận hai tham chiếu đến hai biến kiểu int,   
hoán đổi giá trị của chúng. Kiểm tra kết quả trong main.
*/

#include<iostream>

using namespace std;

int increaseTen(int &refNumber){
    return refNumber += 10;
}
void swapValueByReference(int &refNumberA, int &refNumberB){
    int temp = refNumberA;
    refNumberA = refNumberB;
    refNumberB = temp;
}
int main(){
    //initial variable
    int numberA = 0;
    int &refNumberA = numberA;
    int numberB = 0;
    int &refNumberB = numberB;

    //Bài tập 1;
    cout << "NumberA's value before change: " << numberA << endl;
    refNumberA = 1000;
    cout << "Changed numberA's value by reference: "s << refNumberA << endl;

    //Bài tập 2:
    int increased = increaseTen(refNumberA);
    cout <<"NumberA's value after increase: " << increased << endl;

    // Bài tập 3:
    swapValueByReference(refNumberA, refNumberB);
    cout <<"NumberA's value after swap: " << refNumberA << endl;
    cout <<"NumberB's value after swap: " << refNumberB << endl;
    return 0;
}