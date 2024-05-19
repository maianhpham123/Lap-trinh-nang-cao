#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    int count = 0;
    //size_t thường được sử dụng để biểu diễn kích thước hoặc độ dài của các cấu trúc dữ liệu như mảng, chuỗi, 
    //hoặc bất kỳ cấu trúc nào khác mà đòi hỏi việc đếm hoặc lặp qua các phần tử.
    size_t size1 = str1.length();
    size_t size2 = str2.length();

    for (size_t i = 0; i <= size2 - size1; i++) {
        if(str2.substr(i, size1) == str1) {
            count ++;
        }
    }

    cout << "the number of string 1 appears in string 2 is: " << count << endl;
    return 0;
}

