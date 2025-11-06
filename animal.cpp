#include <iostream>	
using namespace std;
class animal {
public:
    virtual void makesound() {   
        cout << "Sound not yet decided" << endl;
    }
};
class dog : public animal {
public:
    void makesound() override {
        cout << "The sound of dog bark" << endl;
    }
};
class cat : public animal {
public:
    void makesound() override {
        cout << "The sound of cat meow" << endl;
    }
};
int main() {
    animal A;
    dog d;
    cat c;
    animal *ptr = &A;
    ptr->makesound();  
    ptr = &d;
    ptr->makesound();   
    ptr = &c;
    ptr->makesound();  

    return 0;
}
