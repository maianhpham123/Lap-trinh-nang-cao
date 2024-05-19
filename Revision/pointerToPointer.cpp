#include <bits/stdc++.h>
using namespace std;

void pointerToPointer() {
    int a = 10, b = 20, c = 30, sum = 0;
    int *pA = &a, *pB = &b, *pInt;

    int **ppInt = &pInt;
    (*ppInt) = pA;
    cout << &a << endl;
    int a1 = a + 1;
    cout << &a1 << endl;
    
    //sum += **ppInt;
}

int main() {
    pointerToPointer();
    return 0;
}