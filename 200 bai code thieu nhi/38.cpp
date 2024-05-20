#include <iostream>

// Định nghĩa cấu trúc Node
struct Node {
    int data;
    Node* next;
};

// Hàm xóa một node tại vị trí pos
Node* deleteNode(Node* head, int pos) {
    if (head == nullptr) {
        return nullptr;  // Danh sách liên kết rỗng
    }

    // Trường hợp xóa node đầu tiên
    if (pos == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* current = head;
    // Duyệt tới node ngay trước node cần xóa
    for (int i = 0; current != nullptr && i < pos - 1; ++i) {
        current = current->next;
    }
    //cần duyệt node trước node cần xoá...

    // Kiểm tra nếu pos là hợp lệ
    if (current == nullptr || current->next == nullptr) {
        return head;  // pos không hợp lệ
    }

    // Node cần xóa là current->next
    Node* temp = current->next;
    current->next = current->next->next;

    delete temp;

    return head;
}

// Hàm thêm một node mới vào cuối danh sách liên kết
void append(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Hàm in danh sách liên kết
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Hàm chính để kiểm tra
int main() {
    Node* head = nullptr;

    // Thêm một số phần tử vào danh sách
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);
    append(head, 5);

    std::cout << "Danh sách liên kết ban đầu: ";
    printList(head);

    // Xóa node tại vị trí 2
    head = deleteNode(head, 2);

    std::cout << "Danh sách liên kết sau khi xóa node tại vị trí 2: ";
    printList(head);

    // Xóa node tại vị trí 0
    head = deleteNode(head, 0);

    std::cout << "Danh sách liên kết sau khi xóa node tại vị trí 0: ";
    printList(head);

    // Xóa node tại vị trí 3 (hoặc vị trí cuối nếu danh sách ngắn hơn)
    head = deleteNode(head, 2);

    std::cout << "Danh sách liên kết sau khi xóa node tại vị trí 2: ";
    printList(head);

    return 0;
}
