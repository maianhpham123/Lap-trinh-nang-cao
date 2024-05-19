#include <iostream>
using namespace std;

int binarySearch(int* arr, int size, int value) {
    int l = 0;
    int r = size - 1;

    while (l <= r) {
        int mid = (l + r) / 2;
        int* midPtr = arr + mid; //pointer to the middle of the array, equal to arr[mid];
        
        if (*midPtr == value) return mid;
        if (*midPtr < value) l = mid+1;
        else r = mid - 1;
    }

    return -1; //not found
}

int main() {
    int myArray[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; //not declare the size of the array, just myArray[]
    int size = sizeof(myArray) / sizeof(myArray[0]);
    int valueToFind1 = 7;
    int valueToFind2 = 50;

    int result1 = binarySearch(myArray, size, valueToFind1);
    int result2 = binarySearch(myArray, size, valueToFind2);

    if (result1 != -1) {
        cout << "Element found at index: " << result1 << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    if (result2 != -1) {
        cout << "Element found at index: " << result1 << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}