#include "../../../std_lib_facilities.h"

// round double to int
int rounder(double d)
{
	int k {0};
	k = d;
	if (d - k <= 0.5)
		return k;
	else
		return k + 1;
}

int main()
{
	cout << "Think of an integer number greater than 1 and lesser than 100.";

	double d0 {1}, d1 {100}, guess_number {0};
	char answer {'a'};
	bool keep_on_guessing {true};

	cout << "Enter 'y' for yes and 'n' for no for the questions below.\n";

	while (keep_on_guessing) {
		cout << "Is the number you are thinking lesser than or equals to ";
		cout << rounder((d0 + d1) / 2.0) << "?\n";
		cin >> answer;
		if (answer == 'y')
			d1 = rounder((d0 + d1) / 2);
		else if (answer == 'n')
			d0 = rounder((d0 + d1) / 2);
		else {
			cout << "ERROR. Invalid answer.\n";
			return 0;
		}
		guess_number++;

		if (rounder(d1 - d0) <= 1)
			keep_on_guessing = false;
	}

	cout << "It took me only " << guess_number << "steps to correctly guess the number you were thinking.\n";
	cout << "It is " << d1 << ", am I right ? Thanks for playing.";
	return 0;
}
