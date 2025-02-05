/*
void myFunction(param1, param2, param3){
    // code to be executed
}
*/

#include <iostream>
using namespace std;

void myFunction(string fname){
    cout << fname << " Doe\n";
}

int main(){
    myFunction("Joe");
    myFunction("Claire");
    myFunction("Mac");
    return 0;
}