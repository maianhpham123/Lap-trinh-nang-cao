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
    cout << ship.rec.x << " " << ship.rec.y << " " << ship.id;
}

int main()
{
    Ship ship;
    cin >> ship.rec.x >> ship.rec.y >> ship.dx >> ship.dy >> ship.id;
    ship.move();
    display(ship);
    return 0;
}
