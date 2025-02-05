#include <iostream>
using namespace std;

float toCelcius(float fahrenheit){
    return (5.0/9.0)*(fahrenheit - 32.0);
}

int main(){
    float f_value = 98.8;
    float result = toCelcius(f_value);
    cout << "Fahrenheit: " << f_value << "\n";
    cout << "Convert Fahrenheit to Celcius: " << result << "\n";
    return 0;
}