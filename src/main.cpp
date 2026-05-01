#include <iostream>
#include <string>
#include <cmath>

//Class declaration
class Point {

//attributes
private:
    double x;
    double y;

public:
    //constructor
    Point(double initialX, double initialY) {
        x = initialX; //in python self.x
        y = initialY;
    }

    //getter methods
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

    double distanceTo(Point anotherPoint){
        
    }



}; //end of class declaration 


int main() {

    Point p1(0.0, 0.0);
    Point p2(3.0, 4.0);

    std::cout << "p1 = " << p1.toString() << std::endl;
    std::cout << "p2 = " << p2.toString() << std::endl;

    std::cout << "p2.x = " << p2.getX() << std::endl;
    std::cout << "p2.y = " << p2.getY() << std::endl;



    return 0;
}
