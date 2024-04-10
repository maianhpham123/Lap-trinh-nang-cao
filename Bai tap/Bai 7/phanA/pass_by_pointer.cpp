#include<bits/stdc++.h>
using namespace std;

void my_swap(int* pX, int* pY) {
    int c;
    c = *pX;
    *pX = *pY;
    *pY = c;
}

int main() 
{
    int a = 20;
    int b = 25;

    my_swap(&a, &b);
    cout << a << ", " << b;
    return 0;
}

//output: 25, 20