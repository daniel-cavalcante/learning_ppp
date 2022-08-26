#include "../../../std_lib_facilities.h"

int main()
{
	vector<double> path_length;
	double total_distance {0};

	cout << "Enter the length of each path connecting two fixed cities:\n";

	// read length into vector (assumes entries are positive)
	for (double distance {0}; cin >> distance; ) {
		path_length.push_back(distance);
		total_distance += distance;
	}

	sort(path_length);
	cout << "Total distance: " << total_distance << '\n';
	cout << "Smallest distance: " << path_length[0] << '\n';
	cout << "Greatest distance: " << path_length[path_length.size() - 1] << '\n';
	cout << "Mean distance: " << total_distance / path_length.size() << '\n';
	return 0;
}
