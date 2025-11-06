#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "\nInside Parent Class - show() function";
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "\nInside Child Class - show() function";
    }
};

int main() {
    Parent p;
    p.show();   // it will call Base Class show()

    Child c;
    c.show();   // it will call Derived Class show()

    Parent *ptr = &c;   // ptr points to Derived object
    ptr->show();        // Calls Base::show (static binding)

    return 0;
}
