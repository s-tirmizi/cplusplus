// C++ Class Methods
// Outside Function

#include <iostream>
using namespace std;

class MyClass {             // The Class
    public:                 // Access Specifier
        void myMethod();    // Method/function definition
};

// Method/function definition outside the class
void MyClass::myMethod(){
    cout << "Hello World!\n";
}

int main(){
    MyClass myObj;
    myObj.myMethod();
    return 0;
}