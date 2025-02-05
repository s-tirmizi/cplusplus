// Constructors
/*

A constructor in C++ is a special method that is automatically called when an object of a class is created.
To create a constructor, use the same name as the class, followed by parentheses ().

*/

#include <iostream>
using namespace std;

class MyClass {
    public:
        MyClass(){                      // Constructor
            cout << "Hello World \n";
        }
};

int main(){
    MyClass myObj;
    return 0;
}