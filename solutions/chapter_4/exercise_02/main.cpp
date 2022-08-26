#include "../../../std_lib_facilities.h"

// compute mean and median temperatures
int main()
{
	vector<double> temps;				// temperatures
	for (double temp; cin >> temp; )	// read into temp
		temps.push_back(temp);			// put temp into vector
							   
	// compute mean temperature:
	double sum = 0;
	for (double x : temps) sum += x;
	cout << "Average temperature: " << sum / temps.size() << '\n';

	// compute median temperature:
	sort(temps);						// sort temperatures
	if (temps.size() % 2 == 1)
		cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
	else
		cout << "Median temperature: " << (temps[temps.size() / 2] + temps[(temps.size() / 2) - 1]) / 2 << '\n';
	return 0;
}
