#include <iostream>
using namespace std;

int main() {

	char oper;
	double val1;
	double val2;
	double result;
	
	// lists operators for user
	cout << "Operators:" << endl;
	cout << "Addition: +, ";
	cout << "Subtraction -, ";
	cout << "Multiplication: *, ";
	cout << "Division: /, ";
	cout << "Exponentiation: ^" << endl;
	
	// asks for operator from user
	cout << "Enter Operator: ";
	cin >> oper;
	
	// checks if the chosen operation is addition
	if (oper == '+') {
		cout << "Enter the first number to be added: ";
		cin >> val1;
		cout << "Enter the second number to be added: ";
		cin >> val2;
		
		result = val1 + val2;
		cout << "Result: " << result << endl;
	}
	// checks if the chosen operation is subtraction
	else if (oper == '-') {
		cout << "Enter the number to be subtracted: ";
		cin >> val1;
		cout << "Enter the number to subtract: ";
		cin >> val2;
		
		result = val1 - val2;
		cout << "Result: " << result << endl;
	}
	// checks if the chosen operation is multiplication
	else if (oper == '*') {
		cout << "Enter the first number to be multiplied: ";
		cin >> val1;
		cout << "Enter the second number to be multiplied: ";
		cin >> val2;
		
		result = val1 * val2;
		cout << "Result: " << result << endl;
	}
	// checks if the chosen operation is division
	else if (oper == '/') {
		cout << "Enter the numerator: ";
		cin >> val1;
		cout << "Enter the denominator: ";
		cin >> val2;
		
		// avoids dividing by zero
		if (val2 == 0) {
			cout << "Denominator cannot be zero!" << endl;
		}
		else {
			result = val1 / val2;
			cout << "Result: " << result << endl;
		}
	}
	// checks if chosen operation is exponentiation
	else if (oper == '^') {
		cout << "Enter the base: ";
		cin >> val1;
		cout << "Enter the exponent: ";
		cin >> val2;
		
		result = pow(val1, val2);
		cout << "Result: " << result << endl;
	}
	else {
		cout << "Invalid operator!" << endl;
	}

	return 0;
}
