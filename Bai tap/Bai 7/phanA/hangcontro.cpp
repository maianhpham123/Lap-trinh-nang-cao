#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 20, b = 25, c = 30;
    const int* pA = &a; //con trỏ trỏ tơi hằng int
    int* const pB = &b; //hằng con trỏ
    //*pB không khoá giá trị
    const int* const pC = &c; //hằng con trỏ tới hằng int

    *pA += 1;
    *pB += 1;
    *pC += 1;

    pA = NULL;
    pB = NULL;
    pC = NULL;
}