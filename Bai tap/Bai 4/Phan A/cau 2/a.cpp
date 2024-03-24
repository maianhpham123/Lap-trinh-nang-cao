#include <iostream>
#include <string>

using namespace std;

char str1[10];
char str2[10] = "Hello";

void printString(const char* str) {
    cout << "String as array elements: ";
    for (int i = 0; str[i] != '\0'; i++) {
        std::cout << str[i] << " ";
    }
    
    cout << "String as text: " << str << std::endl;
}

int main() {
    cout << "String 1:" << std::endl;
    printString(str1);
    
    cout << "String 2:" << std::endl;
    printString(str2);
    
    return 0;
}
