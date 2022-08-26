#include "../../../std_lib_facilities.h"

void try_this_page_105()
{
	constexpr double kroner_to_dollar = 0.1;
	constexpr double pounds_to_dollar = 1.21;
	constexpr double yen_to_dollar = 0.0074;
	cout << "Please enter a quantity followed by a currency (k, p or y):\n";
	double quantity = 0;
	char currency = 'a';
	cin >> quantity >> currency;
	if (currency == 'k')
		cout << "The quantity in dollar is: $" << kroner_to_dollar * quantity << ".\n";
	else if (currency == 'p')
		cout << "The quantity in dollar is: $" << pounds_to_dollar * quantity << ".\n";
	else if (currency == 'y')
		cout << "The quantity in dollar is: $" << yen_to_dollar * quantity << ".\n";
	else
		cout << "Sorry! I do not recognize the currency " << currency << ".\n";
}

void try_this_page_109()
{
	constexpr double kroner_to_dollar = 0.1;
	constexpr double pounds_to_dollar = 1.21;
	constexpr double yen_to_dollar = 0.0074;
	constexpr double yuan_to_dollar = 0.015;
	cout << "Please enter a quantity followed by a currency (k, p, u or y):\n";
	double quantity = 0;
	char currency = 'a';
	cin >> quantity >> currency;
	switch (currency) {
	case 'k':
		cout << "The quantity in dollar is: $" << kroner_to_dollar * quantity << ".\n";
		break;
	case 'p':
		cout << "The quantity in dollar is: $" << pounds_to_dollar * quantity << ".\n";
		break;
	case 'u':
		cout << "The quantity in dollar is: $" << yuan_to_dollar * quantity << ".\n";
		break;
	case 'y':
		cout << "The quantity in dollar is: $" << yen_to_dollar * quantity << ".\n";
		break;
	default:
		cout << "Sorry! I do not recognize the currency " << currency << ".\n";
		break;
	}
}

//void try_this_page_111()
//{
//	char c = 'a';
//	while (c < char('a' + 26)) {
//		int i = c;
//		cout << c << "\t" << i << "\n";
//		c++; // c plus plus
//	}
//}

void try_this_page_111()
// Cleaner version.
{
	int i = 97;
	while (i < 97 + 26) {
		cout << char(i) << "\t" << i << "\n";
		i++;
	}
}

void try_this_page_113()
{
	for (int i = 48; i < 48 + 10; i++)
		cout << char(i) << "\t" << i << "\n";
	for (int i = 65; i < 65 + 26; i++)
		cout << char(i) << "\t" << i << "\n";
	for (int i = 97; i < 97 + 26; i++)
		cout << char(i) << "\t" << i << "\n";
}

void try_this_page_116()
{
	int k {0};
	cout << "Enter a positive integer number to square it.\n";
	cin >> k;
	int partial {0};
	for (int i = 0; i < k; i++)
		partial += k;
	cout << partial;
}

bool is_disliked(string word, vector<string> dislike)
// auxiliary function to try_this_page_125() and 2nd part of drill
{
	for (int i = 0; i < dislike.size(); i++) {
		if (word == dislike[i])
			return true;
	}
	return false;
}

void try_this_page_125()
{
	vector<string> dislike {"Bolsonaro", "bolsonaro", "Jair", "jair", "mito"};
	string words {""};

	while (cin >> words)
		if (is_disliked(words, dislike))
			cout << "BLEEP\n";
		else
			cout << words << "\n";
}

int main()
{
	cout << "Enter the page number with the corresponding \"Try This\"\n";
	cout << "The possible values are: 105, 109, 111, 113, 116 or 125.\n";
	int page_number {0};
	cin >> page_number;
	switch (page_number) {
	case 105:
		try_this_page_105();
		break;
	case 109:
		try_this_page_109();
		break;
	case 111:
		try_this_page_111();
		break;
	case 113:
		try_this_page_113();
		break;
	case 116:
		try_this_page_116();
		break;
	case 125:
		try_this_page_125();
		break;
	default:
		cout << "Error: invalid page number.";
		break;
	}
	return 0;
}
