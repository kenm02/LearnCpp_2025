/*
Bài tập 1: Tạo và in danh sách
    - Viết chương trình tạo một danh sách liên kết đơn từ một mảng số nguyên (ví dụ: {1, 2, 3, 4, 5}).
    - In lần lượt các phần tử trong danh sách.
Bài tập 2: Đếm số nút trong danh sách
    - Viết hàm countNodes(Node* head) trả về số lượng nút trong danh sách liên kết.
    - Kiểm tra cả trường hợp danh sách rỗng.
Bài tập 3: Tìm kiếm phần tử
    - Viết hàm searchNode(Node* head, int value) trả về true nếu giá trị value tồn tại trong danh sách, false nếu không.
    - In ra thông báo phù hợp (ví dụ: "Found 5" hoặc "5 not found").
Bài tập 4: Thêm nút vào vị trí bất kỳ
    - Viết hàm insertAtPosition(Node*& head, int value, int position) để chèn một nút mới có giá trị value vào vị trí position (đánh số từ 0).
    - Nếu position lớn hơn số nút hiện có, thêm vào cuối danh sách.
*/
#include<iostream>

using namespace std;

// define node struct
struct Node{
    int data;
    Node* next;
    int* increase(){
        int i = -1;
        int* ptr = &i;
        return ptr++;
    }
    Node(int value){
        data = value;
        next = nullptr;
    }
};

//Insert new node at the end
void insertNodeAtEnd(Node* head, int value){
    Node* newNode = new Node(value);
    if(head == nullptr){
        head = newNode;
        return;
    } 
    Node* current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = newNode;
}

// Print Node list out
void printNodeOut(Node* head){
    Node* current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
}
int main(){
    Node* head = nullptr;
    int arr[] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++){
        insertNodeAtEnd(head, arr[i]);
    }
    printNodeOut(head);

    return 0;
}