#include <bits/stdc++.h>
using namespace std;

struct point {
    int x, y;
};

void print(point p) {
    cout << p.x << " " << p.y;
}

int main()
{
    point p;
    p.x = 10;
    p.y = 12;
    print(p);
}
