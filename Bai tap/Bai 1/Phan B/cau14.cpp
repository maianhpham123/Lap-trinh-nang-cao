#include <bits/stdc++.h>
using namespace std;

// doan so lon nhat
int main()
{
    int alice1, alice2;
    cin >> alice1 >> alice2;

    srand(time(0)); 
    int a = rand() % 101; // hoac dung random.randint(lower  bound, upper bound)
    int b = rand() % 101;

    int preBob = max(a,b);

    if (alice1 < preBob) cout << alice2 << endl;
    else cout << alice1 << endl;
    
    return 0;
}

/* 
    Giai thich: 
*/