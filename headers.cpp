// C++ program to demonstrate Standard header files

#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	// using <iostream>
	cout << "Hello, Geek!" << endl;

	// using <cmath>
	double squareRoot = sqrt(25);
	cout << "Square root of 25 is: " << squareRoot << endl;

	// using<cstdlib>
	int randomNum = rand() % 100; // Generate a random
								// number between 0 and 99
	cout << "Random number is : " << randomNum << endl;

	// using <cstring>
	char mystr1[] = "Hello";
	char mystr2[] = " World";
	strcat(mystr1, mystr2);
	cout << "string after concatenation: " << mystr1 << endl;

	// using <vector>
	vector<int> numbers = { 1, 2, 3, 4, 5 };
	cout << "Vector elements are: ";
	for (const auto& num : numbers) {
		cout << num << " ";
	}
	cout << endl;

	// using <string>
	string greeting = "Hello, ";
	string name = "Programmer";
	string fullGreeting = greeting + name;
	cout << "Greeting message: " << fullGreeting << endl;

	return 0;
}
