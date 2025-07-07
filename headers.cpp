#include <bits/stdc++.h>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

	cout << "Hello, Geek!" << endl;

	double squareRoot = sqrt(25);
	cout << "Square root of 25 is: " << squareRoot << endl;

	int randomNum = rand() % 100; 

	cout << "Random number is : " << randomNum << endl;

	char mystr1[] = "Hello";
	char mystr2[] = " World";
	strcat(mystr1, mystr2);
	cout << "string after concatenation: " << mystr1 << endl;

	vector<int> numbers = { 1, 2, 3, 4, 5 };
	cout << "Vector elements are: ";
	for (const auto& num : numbers) {
		cout << num << " ";
	}
	cout << endl;

	string greeting = "Hello, ";
	string name = "Programmer";
	string fullGreeting = greeting + name;
	cout << "Greeting message: " << fullGreeting << endl;

	return 0;
}
