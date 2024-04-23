#include <bits/stdc++.h>
using namespace std;
int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a'; 
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;
    //phan cerr chay sai
    //loi: pointer being freed was not allocated
    //li do: c does not point to a dynamically allocated memory block, but the middle of the 
    //the memory block called for a => udefined behaviour
}