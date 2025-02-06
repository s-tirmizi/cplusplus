#include <iostream>
using namespace std;

struct InputParameters{
	int a;
	int b;
};

class Addition {
	public:

		static InputParameters validParams(){
			InputParameters params;
			params.a = 2;
			params.b = 3;
			return params;
		}
		// Constructor that initializes the addition operation
		Addition(const InputParameters &params): a(params.a), b(params.b) {}

		// Method
		int add() const {
			return a + b;
		}

	private:
		int a;
		int b;
	};

int main() {

	InputParameters params = Addition::validParams();

	params.a = 10;
	params.b = 15;

	Addition myAddition(params);

	cout << "The sum is: " << myAddition.add() << endl;

	return 0;
	
}
