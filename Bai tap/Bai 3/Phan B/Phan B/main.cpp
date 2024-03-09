//
//  main.cpp
//  Phan B
//
//  Created by mac on 3/9/24.
//

#include <iostream>
using namespace std;

struct point {
    int x,y;
};

struct Rect {
    int x,y,w,h;
    
    bool contains(const point p) const {
        if (((p.x < x) || (p.x > x + w)) && ((p.y > y) || (p.y < x - h))) return false;
        return true;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Rect rec;
    cin >> rec.x >> rec.y >> rec.w >> rec.h;
    const Rect rec1 = rec;
    
    point p;
    cin >> p.x >> p.y;
    const point p1 = p;
    
    cout << rec1.contains(p1);
    return 0;
}
