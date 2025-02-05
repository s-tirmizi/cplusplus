// C++ Class Methods
// Inside Function

#include <iostream>
#include <string>

using namespace std;

class MyClass {     // The Class
    public:         // Access Specifier
        void myMethod() {                   // Method/function defined inside the class
            cout << "Hello, World! \n";
        }
};

int main(){
    MyClass myObj;      // Create an object of myClass
    myObj.myMethod();   // Call the Method
    return 0;
}