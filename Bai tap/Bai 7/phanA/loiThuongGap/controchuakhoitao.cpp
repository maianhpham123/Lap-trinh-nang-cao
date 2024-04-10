#include <bits/stdc++.h>
using namespace std;
int main (int argc, const char* argv[])
{
    int *pX;
    printf("%d\n", pX);
    printf("%d\n", *pX);
    *pX = 0;
    return 0;
}

/* 
segmentation fault: truy nhập dẫn đến các lỗi
ghi đè dữ liệu, ghi vào cùng cấm ghi
*/