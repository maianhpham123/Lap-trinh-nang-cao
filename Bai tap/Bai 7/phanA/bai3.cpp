#include <iostream>
using namespace std;

int count_even (int* a, int n) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) res++;
    }

    return res;
}

int main() 
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(a)/sizeof(int);

    int first_five_count = count_even(a, 5);
    cout << "number of the first 5 even numbers: " << first_five_count << endl;

    int last_five_count = count_even(a + 5, 5); //a now is a pointer
    cout << "number of the last 5 even numbers: " << last_five_count << endl;
}