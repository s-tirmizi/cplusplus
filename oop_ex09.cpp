#include <iostream>
using namespace std;

class MyClass {
    public:
        int x;
    private:
        int y;
};

int main(){
    MyClass myObj;
    myObj.x = 25;
    myObj.y = 50; // Not allowed because its private
    return 0;
}