#include "../../../std_lib_facilities.h"


void drill_step_5()
// until step 5 is completed
{
	double k1 {0}, k2 {0};
	while (cin >> k1 >> k2) {
		if (k1 == k2)
			cout << "the numbers are equal\n";
		else if (k1 < k2) {
			cout << "the smaller value is: " << k1 << "\nthe larger value is: " << k2 << "\n";
			if (k2 - k1 < (1.0 / 100))
				cout << "the numbers are almost equal\n";
		}
		else {
			cout << "the smaller value is: " << k2 << "\nthe larger value is: " << k1 << "\n";
			if (k1 - k2 < (1.0 / 100))
				cout << "the numbers are almost equal\n";
		}
	}
}

bool belongs_to(string s, vector<string> vs)
// this function checks if s is an entry in vs
{
	for (int i = 0; i < vs.size(); i++) {
		if (s == vs[i])
			return true;
	}
	return false;
}

void print_vector(vector<double> v)
{
	for (auto x : v)
		cout << x << "\n";
}

double to_meters(double d, string unit)
// this function converts a quantity in any other allowed unit to meters
{
	if (unit == "cm")
		d *= (1.0 / 100);
	else if (unit == "in")
		d *= (2.54 / 100);
	else if (unit == "ft")
		d *= (12 * 2.54 / 100);
	return d;
}

void drill_step_6()
// starting from step 6
{
	double smallest {0}, largest {0}, d {0}, sum {0};
	vector<double> history;

	vector<string> allowed_units {"cm", "m", "in", "ft"};
	string unit = "";

	cout << "Enter CTRL+Z then ENTER to end the program.\n";
	cout << "Please enter a number.\n";
	// if the user input is 10m, for example, the next loop gets weird...
	while (cin >> d) {
		cout << "Please enter a unit.\n";
		cin >> unit;

		if (belongs_to(unit, allowed_units)) {
			double d_in_meters = to_meters(d, unit);
			history.push_back(d_in_meters);
			if (d_in_meters > largest) {
				largest = d_in_meters;
				cout << d << " " << unit << " is largest so far.\n";
			}
			if (d_in_meters < smallest) {
				smallest = d_in_meters;
				cout << d << " " << unit << " is smallest so far.\n";
			}
			sum += d_in_meters;
		}
		else {
			cout << "Illegal unit.\n";
		}
		cout << "Please enter a number.\n";
	}
	sort(history);

	cout << "\nThe smallest number is " << history[0] << " m.\n";
	cout << "The largest number is " << history[history.size() - 1] << " m.\n";
	cout << "The sum of all numbers entered, in meters, is " << sum << ".\n";
	cout << "List of entered numbers (converted to meters):\n";
	print_vector(history);
	cout << "Exiting program...\n";
}

int main()
{
	cout << "Enter '5' if you want to test the drill until step 5 is completed OR\nEnter '6' if you want to test the complete drill starting from step 6.\n";
	int step {0};
	cin >> step;
	switch (step) {
	case 5:
		drill_step_5();
		break;
	case 6:
		drill_step_6();
		break;
	default:
		cout << "ERROR: invalid number.\n";
		break;
	}
	return 0;
}
