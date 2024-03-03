#include<bits/stdc++.h>
using namespace std;

bool isEqual (int x, int y, int z) {
    return (x == y && y == z);
}
int main() 
{
    int x, y, z;
    cin >> x >> y >> z;
    cout << isEqual(x,y,z) << endl;   
}