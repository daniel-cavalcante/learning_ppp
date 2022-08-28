#include "../../../std_lib_facilities.h"

int main()
{
	bool calculator_on {true};
	while (calculator_on) {
		double d1 {0}, d2 {0}, result {0};
		char operation {'.'};
		cin >> d1 >> d2 >> operation;
		switch (operation) {
		case '+':
			cout << "The sum of " << d1 << " and " << d2 << " is " << d1 + d2 << ".\n";
			break;
		case '-':
			cout << "The difference between " << d1 << " and " << d2 << " is " << d1 - d2 << ".\n";
			break;
		case '*':
			cout << "The product of " << d1 << " times " << d2 << " is " << d1 * d2 << ".\n";
			break;
		case '/':
			cout << d1 << " divided by " << d2 << " equals to " << d1 / d2 << ".\n";
			break;
		default:
			calculator_on = false;
			break;
		}
	}
	vector<int> v = {0};

	return 0;
}