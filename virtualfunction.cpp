#include <iostream>
using namespace std;

class Base {
   public:
    void print() {
        cout << "print : Base Function" << endl;
    }
     void show() {
        cout << "Show : Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "print : Derived Function" << endl;
    }
};

int main() {
    
  Base b1; 
  Derived d1;
  Base *b2 = &d1; 
  d1.print(); // early binding so Derived Class FUnction 
  b1.print(); // early binding so Base Class FUnction 
  b2->print();  // early binding done so object type is seen so as of which base class function, so we have to achieve late binding so that pointer's content can be seen 
   
    return 0;
}