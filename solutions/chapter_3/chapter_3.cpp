//Solutions of some tasks of chapter 3
#include "../std_lib_facilities.h"

void try_this_page_65()
{
	cout << "Please, enter your name and age!\n";
	string name = "???";
	double age = 0;
	cin >> name >> age;
	cout << "Hello, " << name << ". Your age in months is " << 12 * age << ".";
}

void try_this_page_68()
{
	cout << "Please enter an integer value: ";
	int n;
	cin >> n;
	double m = n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n * n
		<< "\nn integerly divided by two == " << n / 2
		<< "\nsquare root of n == " << sqrt(m)
		<< '\n'; // name for newline (“end of line”) in output
}

void try_this_page_73()
{
	string previous = " ";
	// previous word; initialized to “not a word”
	string current;
	// current word
	while (cin >> current) {
		// read a stream of words
		if (previous == current)
			// check if the word is the same as last
			cout << "repeated word: " << current << '\n';
		previous = current;
	}
}

// try_this_page_75
// Comment main() and uncomment Main() to see what kind of errors the compiler detects.

//int Main() 
//{
//	STRING s = "Goodbye, cruel world! ";
//	cOut << S << '\n';
//}

void try_this_page_81()
// The double to int conversion works up to d == 2^30, but for d == 2^31 the value is narrowed.
// The int to char conversion works up to d == 127, but for d == 128 the value is narrowed.
{
	double d = 0;
	while (cin >> d) {
		// repeat the statements below
		// as long as we type in numbers
		int i = d;
		// try to squeeze a double into an int
		char c = i;
		// try to squeeze an int into a char
		int i2 = c;
		// get the integer value of the character
		cout << "d==" << d
			// the original double
			<< " i==" << i
			// converted to int
			<< " i2==" << i2
			// int value of char
			<< " char(" << c << ")\n"; // the char
	}
}

void drill()
{
	// Step 1.
	cout << "Enter the name of the person you want to write to\n";
	string first_name {"??"};
	cin >> first_name;
	cout << "Dear " + first_name + ",\n";
	// Step 2.
	cout << "    How have you been doing? I really miss you.\n" << "    I'm hoping to make a visit in the summer.\n";
	// Step 3.
	cout << "Enter the name of your friend\n";
	string friend_name {"???"};
	cin >> friend_name;
	cout << "    Have you seen " << friend_name << " lately?\n";
	// Step 4.
	char friend_sex {0};
	cout << "Please, enter 'm' if your friend is male of 'f' if it is female.\n";
	cin >> friend_sex;
	if (friend_sex == 'm')
		cout << "    If you see " + friend_name + ", please ask him to call me.\n";
	if (friend_sex == 'f')
		cout << "    If you see " + friend_name + ", please ask her to call me.\n";
	// Step 5.
	cout << "Please, enter your friend's age in years.\n";
	int age {0};
	cin >> age;
	if (age <= 0 || age >= 110)
		simple_error("You\'re kidding!");
	// Step 6.
	if (age < 12)
		cout << "    Next year, they will be " << age + 1 << ".\n";
	if (age == 17)
		cout << "    Next year, they will be able to vote.\n";
	if (age > 70)
		cout << "    I hope they're enjoying retirement.\n";
	// Step 7.
	cout << "Yours sincerely. \n \n" + first_name;
}

void letter()
{
	cout << "Enter the name of the person you want to write to\n";
	string first_name {"??"};
	cin >> first_name;
	cout << "Enter the name of your friend\n";
	string friend_name {"???"};
	cin >> friend_name;
	cout << "Please, enter 'm' if your friend is male of 'f' if it is female.\n";
	char friend_sex {0};
	cin >> friend_sex;
	cout << "Please, enter your friend's age in years.\n";
	int age {0};
	cin >> age;
	if (age <= 0 || age >= 110)
		simple_error("You\'re kidding!");
	
	// Build the letter.
	cout << "Dear " + first_name + ",\n";
	cout << "    How have you been doing? I really miss you.\n" << "    I'm hoping to make a visit in the summer.\n";
	cout << "    Have you seen " << friend_name << " lately?\n";
	if (friend_sex == 'm') {
		cout << "    If you see " + friend_name + ", please ask him to call me.\n";
		if (age < 12)
			cout << "    Next year, he\'ll be " << age + 1 << ".\n";
		if (age == 17)
			cout << "    Next year, he\'ll be able to vote.\n";
		if (age > 70)
			cout << "    I hope he's enjoying retirement.\n";
	}
	if (friend_sex == 'f') {
		cout << "    If you see " + friend_name + ", please ask her to call me.\n";
		if (age < 12)
			cout << "    Next year, she\'ll be " << age + 1 << ".\n";
		if (age == 17)
			cout << "    Next year, she\'ll be able to vote.\n";
		if (age > 70)
			cout << "    I hope she's enjoying retirement.\n";
	}
	cout << "Yours sincerely. \n \n" + first_name + "\n";
}

// I've found all the exercises too easy to do. The "drill" and "try this" was enough for me.

int main()
{
	letter();
	return 0;
}
