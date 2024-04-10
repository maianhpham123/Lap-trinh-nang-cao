#include<bits/stdc++.h>
using namespace std;

int dereferencing_test(int myX)
{
    int* pX = &myX;
    myX += 1;
    myX += *pX;
    (*pX) += 2;
    return *pX;
}

int main()
{
    printf("test %d is %d", 0, dereferencing_test(0));
}

//output: test 0 is 4