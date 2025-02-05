#include <iostream>
using namespace std;

void myFunction(){
    cout << "I just got executed! \n";
}

int main(){
    myFunction();
    myFunction();
    myFunction();
    myFunction();
    return 0;
}

/*
void myFunction(){ // declaration
    // the body of the function (definition)
}
*/