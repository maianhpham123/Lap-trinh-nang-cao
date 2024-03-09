//
//  bai6.cpp
//  Phan B
//
//  Created by mac on 3/9/24.
//

#include <iostream>
using namespace std;

struct Rect {
    int x,y;
    int w,h;
    string id;
};

struct Ship {
    Rect rec;
    string id;
    int dx, dy;
    void move() {
        rec.x += dx;
        rec.y += dy;
    }
};

void display(const Ship& ship) {
    Rect rec = ship.rec;
    cout << rec.x << " " << rec.y << " " << ship.id;
}

int main()
{
    Ship ship;
    Rect rec = ship.rec;
    cin >> rec.x >> rec.y >> ship.dx >> ship.dy >> ship.id;
    ship.move();
    display(ship);
    return 0;
}
