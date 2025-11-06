#include <iostream>
using namespace std;

class Number {
public:
    int value;
    Number(int v = 0) {
        value = v;
    }
    void operator++() {
        ++value;
    }
    Number operator+(Number obj) {
        Number temp;
        temp.value = value + obj.value;
        return temp;
    }
    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n1(5), n2(10), n3;

    cout << "Initial values:" << endl;
    n1.display();
    n2.display();

    ++n1;   
    cout << "\nAfter unary ++ on n1:" << endl;
    n1.display();

    n3 = n1 + n2;  
    cout << "\nAfter binary + (n1 + n2):" << endl;
    n3.display();

    return 0;
}
