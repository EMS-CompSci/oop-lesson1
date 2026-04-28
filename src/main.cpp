#include <iostream>
#include <string>

class Point {

private:
    double x;
    double y;

public:
    Point(double initialX, double initialY) {
        x = initialX;
        y = initialY;
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    std::string toString() {
        return "(" + std::to_string(x) + ", "
                   + std::to_string(y) + ")";
    }



};  


int main() {

    Point p1(0.0, 0.0);
    Point p2(3.0, 4.0);

    std::cout << "p1 = " << p1.toString() << std::endl;
    std::cout << "p2 = " << p2.toString() << std::endl;

    std::cout << "p2.x = " << p2.getX() << std::endl;
    std::cout << "p2.y = " << p2.getY() << std::endl;



    return 0;
}
