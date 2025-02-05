#include <iostream>
using namespace std;

class Employee {
    private:
        int salary;

    public:
        // Setter
        void setSalary(int s){
            salary = s;
        }
        // Getter
        int getSalary(){
            return salary;
        }
};

int main(){
    Employee myObj;
    myObj.setSalary(5000);
    cout << myObj.getSalary() << endl;
    return 0;
}