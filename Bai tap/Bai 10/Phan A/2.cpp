#include <bits/stdc++.h>
using namespace std;
int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; 
    // khi delete p thi cung delete luon p2 vi p2 copy dia chi cua p1
    // va p1 bay gio co dia chi la NULL nen p2 cung la NULL
    *p2 = 100;
    cout << *p2;
    delete p2;

}