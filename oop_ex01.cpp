#include <iostream>
#include <string>
using namespace std;

class MyClass {                 // The Class
    public:                     // Access specifier
        int myNum;              // Attribute
        string myString;        // Attribute
};

int main(){
    MyClass myObj;              // Create an object of MyClass

    // Access attributes and set values
    myObj.myNum = 15;
    myObj.myString = "Some text";

    // Print values
    cout << myObj.myNum << "\n";
    cout << myObj.myString << endl;
    return 0;
}