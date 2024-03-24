#include <iostream>
using namespace std;

int arr1[] = {1,2,3,4};

int main() 
{
    int arr2[] = {1, 2, 3, 4};
    // sử dụng mảng a ở đây
    
    for (int i : arr1) cout << i << " ";
    cout << endl;
    for (int i : arr2) cout << i << " ";
    
    return 0;
}
