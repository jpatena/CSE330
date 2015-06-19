// Class: CSE 330
// Term: Spring 2014
// Instructor: George M. Georgiou
// Name(s): Jaron Patena, JinYong Doh
// Lab 6
// Title: Stack.h and RPN

# include <iostream>
# include "Stack.h"

using namespace std;

//	class calculatorEngine
//		simulate the behavior of a simple integer calculator
class calculatorEngine {
public:
	enum  binaryOperator {plus, minus, multiply, divide};

	int   currentMemory   () { return data.top (); }
	void  pushOperand     (int value) { data.push (value); }
	void  doOperator      (binaryOperator theOp);

protected:
	stack<int> data;
};

// perform a binary operation on stack values
void calculatorEngine::doOperator(binaryOperator theOp) {
	int right = data.top();
	data.pop();
	int left = data.top();
	data.pop();
	int result;
	switch(theOp) {	// do the operation
		case plus: 
			result = left + right;
			break;
		case minus:
			result = left - right;
			break;
		case multiply:
			result = left * right;
			break;
		case divide:
			result = left / right;
			break;
		}

	// push the result back on the stack
	data.push(result);
}

void calculator() {	
	int intval;
	calculatorEngine calc;
	char c;

	while (cin >> c) {
		switch(c) {
			case '0': case '1': case '2': case '3': case '4':
			case '5': case '6': case '7': case '8': case '9':
				cin.putback(c);
				cin >> intval;
				calc.pushOperand(intval);
				break;

			case '+': // add
				calc.doOperator(calculatorEngine::plus);
				break;

			case '-': // subtract
				calc.doOperator(calculatorEngine::minus);
				break;

			case '*': // multiply
				calc.doOperator(calculatorEngine::multiply);
				break;

			case '/': // divide
				calc.doOperator(calculatorEngine::divide);
				break;

			case 'p': // equals
				cout << calc.currentMemory() << '\n';
				break;

			case 'q': // quit calculator
				return;
			}
		}
}

int main () { calculator(); }

