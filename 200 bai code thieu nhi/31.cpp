/*
In C++, a friend function is a function that is given special access to the private and protected members 
of a class. This means that the friend function can access and modify the private and protected data members 
of the class as if it were a member function of the class.

ostream: is a class in C++ library that represents output streams. It's part of the iostream library and which 
provides facilities for input and output operations.
is used for outputting data to vairous destinations such as console, file or 
other output file
*/

#include <iostream>
#include <iomanip>
using namespace std;

#include <iostream>
#include <iomanip>

class Time {
private:
    int h, m, s;

    void normalize() {
        if (s >= 60) {
            m += s / 60;
            s = s % 60;
        }
        if (m >= 60) {
            h += m / 60;
            m = m % 60;
        }
        if (h >= 24) {
            h = h % 24;
        }
    }

public:
    // Constructor with default arguments
    Time(int hour = 0, int min = 0, int sec = 0) : h(hour), m(min), s(sec) {
        normalize();
    }

    // Friend function for output operator
    friend std::ostream& operator<<(std::ostream& os, const Time& t) {
        os << std::setw(2) << std::setfill('0') << t.h << ":"
           << std::setw(2) << std::setfill('0') << t.m << ":"
           << std::setw(2) << std::setfill('0') << t.s;
        return os;
    }

    // Comparison operators
    bool operator==(const Time& other) const {
        return (h == other.h && m == other.m && s == other.s);
    }

    bool operator!=(const Time& other) const {
        return !(*this == other);
    }

    bool operator<(const Time& other) const {
        if (h < other.h) return true;
        if (h > other.h) return false;
        if (m < other.m) return true;
        if (m > other.m) return false;
        return s < other.s;
    }

    bool operator<=(const Time& other) const {
        return *this < other || *this == other;
    }

    bool operator>(const Time& other) const {
        return !(*this <= other);
    }

    bool operator>=(const Time& other) const {
        return !(*this < other);
    }

    // Member functions to get the hour, minute, and second
    int hour() const {
        return h;
    }

    int minute() const {
        return m;
    }

    int second() const {
        return s;
    }
};

int main() {
    Time t1(8, 70, 70); // Should normalize to 09:11:10
    Time t2(23, 59, 59);
    Time t3(24, 0, 0);  // Should normalize to 00:00:00

    std::cout << "Time t1: " << t1 << std::endl;
    std::cout << "Time t2: " << t2 << std::endl;
    std::cout << "Time t3: " << t3 << std::endl;

    std::cout << "t1 == t2: " << (t1 == t2) << std::endl;
    std::cout << "t1 != t2: " << (t1 != t2) << std::endl;
    std::cout << "t1 < t2: " << (t1 < t2) << std::endl;
    std::cout << "t1 <= t2: " << (t1 <= t2) << std::endl;
    std::cout << "t1 > t2: " << (t1 > t2) << std::endl;
    std::cout << "t1 >= t2: " << (t1 >= t2) << std::endl;

    return 0;
}
