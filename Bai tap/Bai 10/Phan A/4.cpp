#include <bits/stdc++.h>
using namespace std;

int* localVar() {
    int local = 10;
    int *ptr = &local;
    return ptr;
}

int main()
{
    int* dynamicPtr = localVar();
    // Lỗi: Con trỏ dynamicPtr trỏ tới biến địa phương đã bị giải phóng
    cout << *dynamicPtr << endl;  // Undefined behavior
    return 0;
}

//up until now, the output is still 10 as expected, but the result is unpredictable
// and not correct