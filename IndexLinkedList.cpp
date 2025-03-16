/*
    - Tự dưng lại nảy ra một ý tưởng là sử dụng Linked List có giới hạn là: khi muốn tìm một phần tử trong 
    list lại phải duyệt từ đầu đến cuối list, vậy tại sao không thêm một biến index vào trong struct của list
    để mỗi lần muốn thay đổi giá trị tại vị trí đấy thì chỉ cần thông qua index để lấy giá trị ra.
    - Triển khai ý tưởng:
        + Tạo ra một struct có 3 thành phần : giá trị, index , và linkNext
        + tạo ra một class tên là Linked list bên trong chứa các hàm để xử lý index mỗi khi linked List tăng size hoặc giảm size
    Chén thôi :D, Nhưng có vẻ làm bài toán hơi phức tạp hóa nhỉ, nếu sử dụng 1 hàm riêng để tìm lấy giá trị trong Nodes thì độ phức tạp thuật toán nó chỉ O(n)
    còn nếu sử dụng thêm hàm riêng và tạo class riêng này lại tăng lên 2O(n), không rõ nữa nhưng cứ chén đi xong tính sau :XD
*/
#include<iostream>

using namespace std;

struct Node
{
    int value;
    int index;
    Node* next;
    Node(int value, int index){
        this->value = value;
        this->index = index;
        next = nullptr;
    }
};
class IndexLinkedList
{
    private:
        Node* head;
        int size;
    public:
        IndexLinkedList()
        {
        head = nullptr; 
        size = 0;
        }

    void addNew(int val)
    {
        Node* newNode = new Node(val, size);
        size ++;
        if ((head == nullptr))
        {
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != nullptr){
            temp  = temp->next;
        }
        temp->next = newNode;
    }

    void removeAt(int idx) {
        if (idx < 0 || idx >= size) {
            cout << "Index không hợp lệ!\n";
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;

        // Xóa node đầu tiên
        if (idx == 0) {
            head = head->next;
            delete temp;
        } else {
            for (int i = 0; i < idx; i++) {
                prev = temp;
                temp = temp->next;
            }
            prev->next = temp->next;
            delete temp;
        }

        // Cập nhật lại index từ vị trí bị xóa
        temp = (idx == 0) ? head : prev->next;
        while (temp != nullptr) {
            temp->index--;
            temp = temp->next;
        }

        size--;
    }

    // In danh sách
    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << "[Index: " << temp->index << ", Data: " << temp->value << "];";
            temp = temp->next;
        }
    }

};
int main(){
   IndexLinkedList newLinkedList;
   newLinkedList.addNew(12);
   newLinkedList.addNew(24);
   newLinkedList.addNew(48);

   newLinkedList.printList();
}