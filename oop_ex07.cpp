/*
***************************
Constructor Parameters
***************************

Constructors can also take parameters (just like regular functions), which can be useful for setting initial values for attributes.

The following class have brand, model and year attributes, and a constructor with different parameters. 
Inside the constructor we set the attributes equal to the constructor parameters (brand=x, etc). 
When we call the constructor (by creating an object of the class), we pass parameters to the constructor, 
which will set the value of the corresponding attributes to the same:
*/

#include <iostream>
using namespace std;

class Car {
    public:
        string brand;
        string model;
        int year;
        Car(string x, string y, int z){     // Constructor with Parameters
            brand = x;
            model = y;
            year = z;
        }
};

int main(){

    Car carObj1("BMW", "X5", 1991);
    Car carObj2("Toyota", "Corolla", 2002);

    // Print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;
}