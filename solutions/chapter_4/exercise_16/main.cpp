#include "../../../std_lib_facilities.h"

void print_vector(vector<int> v)
{
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
}

void find_mode(vector<int> v)
{
	int mode = v[0];
	int most_repeated = 0;
	int counter = 0;
	cout << "Iniciando loop em find_mode...\n";
	cout << "Iter.# \tCounter# \tCurrentMode\n";
	for (int i = 0; i < v.size()-1; i++) {
		counter++;
		if (v[i] != v[i + 1]) {
			if (counter > most_repeated) {
				most_repeated = counter;
				mode = v[i-1];
			}
			counter = 0;
		}
		cout << i << '\t' << counter << '\t' << mode << '\n';
	}
	cout << "for terminando??\n";
	//return mode;
}

int main()
{
  // uncomment each line to try it out or...
	// vector<int> positive_integers = {2,3,4,4};
  // vector<int> positive_integers = {7, 1, 2, 3, 3, 4};
  // vector<int> positive_integers = {2,3,4,5,7,4,5,2,2,3,6,1,1,1,7,5,2,2,12,4,4,3,2,6,1}; 

  // enter your own input
  vector<int> positive_integers = {};
  int k = 0;
  while (cin >> k)
    positive_integers.push_back(k);

	sort(positive_integers);
	find_mode(positive_integers);

	return 0;
}