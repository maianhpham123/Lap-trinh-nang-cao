#include <iostream>
using namespace std;

// Hàm nhận mảng dưới dạng con trỏ
void printArrayAndAddress(int* arr, int size) {
    cout << "Address of array in function: " << arr << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i << ": " << arr[i] << " (address: " << &arr[i] << ")" << endl;
    }
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    //in kich thuoc mang bang toan tu sizeof
    int size = sizeof(myArray) / sizeof(int); //sizeof(int): 4bytes
    
    cout << "Address of array in main: " << myArray << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i << ": " << myArray[i] << " (address: " << &myArray[i] << ")" << endl;
    }

    // Gọi hàm và truyền mảng vào
    printArrayAndAddress(myArray, size);

    return 0;
}
