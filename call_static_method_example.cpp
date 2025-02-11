#include <iostream>
#include <string>

// A simple class representing input parameters
class InputParameters{
	public:
		std::string message; // a parameter that holds a message

		// Contructor that intializes the message with a default value
		InputParameters() : message("Hello, world!") {} 

		// (Optional) A method to change the message.
		void setMessage(const std::string& newMessage){
			message = newMessage;
		}
};

// A class that simulates a module (like ADKernelGrad) which provides validated parameters
class ADKernelGrad {
	public:
		// The static method validParams() returns an InputParameters object with default value
		static InputParameters validParams(){
			InputParameters params;
			return params;
		}
};

int main(){
	// Get default (validated) parameters from ADKernelGrad
	InputParameters params = ADKernelGrad::validParams();

	std::cout << params.message << std::endl;

	return 0;
}
