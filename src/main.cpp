// ============================================================
//  Lesson 1: Classes, Objects and Instantiation
//  AQA A-Level Computer Science — Object-Oriented Programming
// ============================================================
//
//  LEARNING OBJECTIVES
//  By the end of this lesson you should be able to:
//    1. Explain what a class is and how it differs from an object
//    2. Identify the private and public sections of a class
//    3. Create (instantiate) objects from a class
//    4. Call methods on an object using dot notation
//
//  HOW TO BUILD AND RUN
//    Press Ctrl+Shift+B
//    Output appears in the Terminal panel below.
//
// ============================================================

#include <iostream>
#include <string>

// ============================================================
//  BACKGROUND — read before you start coding
//
//  So far in programming you have used variables to store
//  single values (int, double, string) and functions to
//  perform actions.
//
//  Object-Oriented Programming (OOP) bundles related data
//  and the actions that work on that data together into a
//  single unit called a CLASS.
//
//  Think of a class as a BLUEPRINT and an object as something
//  BUILT FROM that blueprint.
//
//  Blueprint (class):   Point
//  Things built from it (objects):  p1, p2, p3 ...
//
//  Every object has its own copy of the data (attributes)
//  but shares the same set of actions (methods).
//
// ============================================================


// ============================================================
//  THE Point CLASS
//
//  A Point represents a single location in 2D space.
//  It stores an x-coordinate and a y-coordinate.
//
//  The class is divided into two sections:
//
//    private — data hidden from the outside world.
//              Nothing outside this class can read or change
//              these directly. This is called ENCAPSULATION.
//
//    public  — actions the outside world is allowed to use.
//              Methods listed here form the class INTERFACE.
//
// ============================================================

class Point {

private:
    // ATTRIBUTES (member variables)
    // Declared private — protected from direct outside access.
    double x;
    double y;

public:
    // ----------------------------------------------------------
    //  CONSTRUCTOR
    //
    //  A special method called automatically when an object
    //  is created. Its job is to set the initial values of
    //  all attributes.
    //
    //  The constructor has the same name as the class.
    //  It has no return type — not even void.
    //
    //  The ': x(initialX), y(initialY)' part is called an
    //  INITIALISER LIST. It is the C++ way of setting
    //  attribute values inside a constructor.
    // ----------------------------------------------------------
    Point(double initialX, double initialY)
        : x(initialX), y(initialY)
    {
        // The body can be left empty if the initialiser
        // list does all the work.
    }

    // ----------------------------------------------------------
    //  GETTERS (accessor methods)
    //
    //  Because x and y are private, we cannot read them
    //  directly from outside the class. Getters provide
    //  controlled, read-only access.
    //
    //  'const' at the end of a method signature means:
    //  "This method promises not to change any attributes."
    //  Getters should always be const.
    // ----------------------------------------------------------
    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    // ----------------------------------------------------------
    //  toString()
    //
    //  Returns a human-readable string describing this Point.
    //  std::to_string() converts a number to a string.
    // ----------------------------------------------------------
    std::string toString() const {
        return "(" + std::to_string(x) + ", "
                   + std::to_string(y) + ")";
    }

    // ----------------------------------------------------------
    //  TODO 1 — Add a method called distanceTo()
    //
    //  It should:
    //    - Accept another Point as a parameter
    //    - Return the straight-line (Euclidean) distance
    //      between this point and the other point
    //    - Use the formula: sqrt( (x2-x1)^2 + (y2-y1)^2 )
    //
    //  You will need to add:
    //    #include <cmath>    at the top of this file
    //
    //  Available functions from <cmath>:
    //    std::sqrt(n)    — square root of n
    //    std::pow(n, 2)  — n squared  (or just write n*n)
    //
    //  Method signature:
    //    double distanceTo(const Point& other) const
    //
    //  The '&' means we receive a reference to the other
    //  Point rather than a copy — more efficient.
    //  The 'const' before Point& means we promise not to
    //  modify it.
    // ----------------------------------------------------------



    // ----------------------------------------------------------
    //  TODO 2 — Add a method called midpointTo()
    //
    //  It should:
    //    - Accept another Point as a parameter
    //    - Return a NEW Point at the midpoint between
    //      this point and the other
    //    - Midpoint formula:
    //        x = (x1 + x2) / 2
    //        y = (y1 + y2) / 2
    //
    //  Method signature:
    //    Point midpointTo(const Point& other) const
    //
    //  Notice this method RETURNS A Point object —
    //  methods can return objects, not just numbers and strings.
    // ----------------------------------------------------------



};  // <-- class definitions always end with a semicolon


// ============================================================
//  MAIN — execution starts here
// ============================================================

int main() {

    // ----------------------------------------------------------
    //  INSTANTIATION — creating objects from the class
    //
    //  We call the constructor by writing the class name
    //  followed by the arguments in parentheses.
    //  C++ allocates memory and calls Point(initialX, initialY)
    //  automatically.
    // ----------------------------------------------------------
    Point p1(0.0, 0.0);
    Point p2(3.0, 4.0);

    // ----------------------------------------------------------
    //  Calling methods using DOT NOTATION: object.method()
    // ----------------------------------------------------------
    std::cout << "p1 = " << p1.toString() << std::endl;
    std::cout << "p2 = " << p2.toString() << std::endl;

    std::cout << "p2.x = " << p2.getX() << std::endl;
    std::cout << "p2.y = " << p2.getY() << std::endl;

    // ----------------------------------------------------------
    //  TODO 3 — Uncomment these lines once distanceTo() works.
    //
    //  The distance between (0,0) and (3,4) is exactly 5.0
    //  (a 3-4-5 right triangle). Use this to check your answer.
    // ----------------------------------------------------------

    // double d = p1.distanceTo(p2);
    // std::cout << "Distance p1 to p2: " << d << std::endl;


    // ----------------------------------------------------------
    //  TODO 4 — Uncomment these lines once midpointTo() works.
    //
    //  The midpoint of (0,0) and (3,4) is (1.5, 2.0).
    // ----------------------------------------------------------

    // Point mid = p1.midpointTo(p2);
    // std::cout << "Midpoint: " << mid.toString() << std::endl;


    // ----------------------------------------------------------
    //  TODO 5 — Create your own Points and experiment
    //
    //  a) Create a Point p3 anywhere you like.
    //     Print its coordinates.
    //
    //  b) Find the distance from p1 to p3.
    //     Then find the distance from p2 to p3.
    //
    //  c) Create a Point p4 at the midpoint of p2 and p3.
    //     Verify it looks correct.
    //
    //  d) Try this: what happens if you write p1.x = 99.0 ?
    //     Why does the compiler refuse?
    //     Write your explanation as a comment here:
    //
    //  Answer:
    //
    // ----------------------------------------------------------



    return 0;
}


// ============================================================
//  REFLECTION QUESTIONS — answer as comments or discuss
//
//  1. What is the difference between a class and an object?
//     Use Point as your example.
//
//  2. What does 'private' mean? Why is it useful?
//     What would go wrong if x and y were public?
//
//  3. Why does the constructor have no return type?
//
//  4. What does 'const' mean on a method?
//     Why is it correct for getX() but wrong for a setter?
//
//  5. p1 and p2 are both Points. Do they share the same x
//     and y variables, or do they each have their own?
//     How can you tell?
// ============================================================
